; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004c5410(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_whichPart_005e0bd2
;   TerminatedCString s_masterFrame_005e0bdc
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5410
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004c5410
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c5411
    PUSH EBX                            ; 004c5415
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004c5416
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c541b
    PUSH 0x5e0bd2                       ; 004c541e | = "whichPart"
    LEA EAX,[EBX + 0x158]               ; 004c5423
    PUSH EAX                            ; 004c5429
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004c542a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c542f
    PUSH 0x5e0bdc                       ; 004c5432 | = "masterFrame"
    LEA EAX,[EBX + 0x15c]               ; 004c5437
    PUSH EAX                            ; 004c543d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004c543e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5443
    POP EBX                             ; 004c5446
    RET                                 ; 004c5447

