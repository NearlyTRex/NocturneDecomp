; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_FUN_004f3580(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bce69
;   core_stranger.cpp_CStranger_processDamage_FUN_005c48b0 at 005c48e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3580
        ;   Label: core_hero.cpp_CHero_FUN_004f3580
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3581
    MOV EDX,dword ptr [EBX + 0x1fbb0]   ; 004f3585
    TEST EDX,EDX                        ; 004f358b
    JNZ 0x004f3591                      ; 004f358d
        ;   XREF to: 004f3591 (CONDITIONAL_JUMP)  ; LAB_004f3591
    POP EBX                             ; 004f358f
    RET                                 ; 004f3590
    PUSH EBX                            ; 004f3591
        ;   Label: LAB_004f3591
    MOV EAX,EDX                         ; 004f3592
    PUSH EAX                            ; 004f3594
    MOV EDX,dword ptr [EDX + 0x154]     ; 004f3595
    CALL dword ptr [EDX + 0x9c]         ; 004f359b
    ADD ESP,0x8                         ; 004f35a1
    MOV dword ptr [EBX + 0x1fbb0],0x0   ; 004f35a4
    POP EBX                             ; 004f35ae
    RET                                 ; 004f35af

