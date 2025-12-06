; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
;
; Parameters:
; double           Stack[0x4]:8   trigger_time
; int              Stack[0xc]:4   trigger_id
;
; XREF[4]:
;   core_boneguy.cpp_FUN_0041bf90 at 0041c5b0
;   core_drone.cpp_FUN_0048ec70 at 0048f2ad
;   core_event.cpp_CEventList_FUN_004b0f00 at 004b0f46
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de540
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[80]
;   undefined4 g_SfxLastSlot.field_20[84]
;   undefined4 g_SfxLastSlot.field_20[88]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8be0 | int g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
    SHL EAX,0x4                         ; 005a8be5
    MOV EDX,EAX                         ; 005a8be8
    SHL EAX,0x3                         ; 005a8bea
    SUB EAX,EDX                         ; 005a8bed
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8bef
    MOV dword ptr [EAX + 0x3f62508],EDX ; 005a8bf3 | g_SfxLastSlot.field_20[80]
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a8bf9
    MOV dword ptr [EAX + 0x3f6250c],EDX ; 005a8bfd | g_SfxLastSlot.field_20[84]
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8c03
    MOV dword ptr [EAX + 0x3f62510],EDX ; 005a8c07 | g_SfxLastSlot.field_20[88]
    RET                                 ; 005a8c0d

