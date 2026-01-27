// Name: core_trigger.cpp_CTrigger_FUN_005e1350
// Address: 005e1350
// Address Range: [[005e1350, 005e1650]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e1350(CTrigger * this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e1350(CTrigger *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"With CTRL held down, use slew keys to size box.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Each frame, the trigger either raises the on event, or the off event.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Figuring out which of these two events will be raised can be divided");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"into two phases.  First we figure out if the trigger is \"active\" on a given");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"frame depending on \"who triggers me\".  Next, we decide which event to raise,");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"depending on the trigger type.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Description of \"who triggers\" options:");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Hero triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the hero is inside my box.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   An actor triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the *ONE* specific actor with the given");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        name is inside the trigger.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Light triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the amount of light on the center point");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        is in a given range.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   The action button triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the hero presses the action button");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        when standing right in front of the trigger");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Bullet triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when it gets hit by a bullet");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Laser triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when it gets hit by a laser");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Explosion triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when a nearby explosion is active");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Damage triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when its 'hitpoints' reaches 0");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Motion triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when a hero is in the box with some control input");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Matched actors trigger me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when an actor of the correct type, with a name");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        that matches the wildspec is inside the box.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"            Actor type(s) is a list of actor class names.  All actors");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"              are of type CDemonActor");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"            Actor name is wildcard pattern string specifying an actor name");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"              to match.  ? and * are supported in the pattern");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Description of trigger types:");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Momentary");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The on event is raised while the trigger is active, and the off");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        event is raised when the trigger is not active.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   One shot");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The off event will be raised until the first time the trigger is active.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        Once the trigger becomes active, the on event will always be raised,");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        even the trigger becomes inactive.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Rising edge");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The on event is raised when the trigger changes from an inactive to an");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        active state.  This will strobe the on event for a single frame, until");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        the trigger becomes inactive and then active once again.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Falling edge");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The on event is raised when the trigger changes from an active to an");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        inactive state.  This will strobe the on event for a single frame, until");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        the trigger becomes active and then inactive once again.");
  return;
}
