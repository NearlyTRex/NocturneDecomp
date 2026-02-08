// Name: core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350
// Address: 005e1350
// Address Range: [[005e1350, 005e1650]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_showEditorHelp_FUN_005e1350(CTrigger *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_showEditorHelp_FUN_005e1350(CTrigger *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"With CTRL held down, use slew keys to size box.");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Each frame, the trigger either raises the on event, or the off event.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Figuring out which of these two events will be raised can be divided");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"into two phases.  First we figure out if the trigger is \"active\" on a given");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"frame depending on \"who triggers me\".  Next, we decide which event to raise,");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"depending on the trigger type.");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Description of \"who triggers\" options:");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Hero triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when the hero is inside my box.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   An actor triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when the *ONE* specific actor with the given");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        name is inside the trigger.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Light triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when the amount of light on the center point");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        is in a given range.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   The action button triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when the hero presses the action button");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        when standing right in front of the trigger");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Bullet triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when it gets hit by a bullet");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Laser triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when it gets hit by a laser");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Explosion triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when a nearby explosion is active");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Damage triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when its 'hitpoints' reaches 0");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Motion triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when a hero is in the box with some control input");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Matched actors trigger me");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The trigger is active when an actor of the correct type, with a name");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        that matches the wildspec is inside the box.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"            Actor type(s) is a list of actor class names.  All actors");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"              are of type CDemonActor");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"            Actor name is wildcard pattern string specifying an actor name");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"              to match.  ? and * are supported in the pattern");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Description of trigger types:");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Momentary");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The on event is raised while the trigger is active, and the off");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        event is raised when the trigger is not active.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   One shot");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The off event will be raised until the first time the trigger is active.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        Once the trigger becomes active, the on event will always be raised,");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        even the trigger becomes inactive.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Rising edge");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The on event is raised when the trigger changes from an inactive to an");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        active state.  This will strobe the on event for a single frame, until");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        the trigger becomes inactive and then active once again.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"   Falling edge");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        The on event is raised when the trigger changes from an active to an");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        inactive state.  This will strobe the on event for a single frame, until");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"        the trigger becomes active and then inactive once again.");
  return;
}
