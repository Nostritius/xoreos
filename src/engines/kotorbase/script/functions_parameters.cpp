/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  Functions for script parameters.
 */

#include <memory>

#include "src/aurora/nwscript/ncsfile.h"
#include "src/aurora/nwscript/functioncontext.h"

#include "src/engines/kotorbase/game.h"
#include "src/engines/kotorbase/module.h"

#include "src/engines/kotorbase/script/functions.h"

namespace Engines {

namespace KotORBase {

void Functions::getScriptParameter(Aurora::NWScript::FunctionContext &ctx) {
	int index = ctx.getParams()[0].getInt();

	ctx.getReturn() = ctx.getCurrentScript()->getParameter(index - 1);
}

void Functions::getScriptStringParameter(Aurora::NWScript::FunctionContext &ctx) {
	ctx.getReturn() = ctx.getCurrentScript()->getParameterString();
}

} // End of namespace KotORBase

} // End of namespace Engines
