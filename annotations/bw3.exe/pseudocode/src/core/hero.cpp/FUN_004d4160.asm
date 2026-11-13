; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004d4160(CHero *this_ptr,int hand_index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; XREF[1]:
;   core_prye.cpp_FUN_0051b550 at 0051b7e5
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004319d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4160
        ;   Label: core_hero.cpp_FUN_004d4160
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4161
    MOV EDX,dword ptr [EBX + 0x20b98]   ; 004d4165
    TEST EDX,EDX                        ; 004d416b
    JNZ 0x004d4171                      ; 004d416d
        ;   XREF to: 004d4171 (CONDITIONAL_JUMP)  ; LAB_004d4171
    POP EBX                             ; 004d416f
    RET                                 ; 004d4170
    PUSH ESI                            ; 004d4171
        ;   Label: LAB_004d4171
    PUSH 0x0                            ; 004d4172
    PUSH 0x3dcccccd                     ; 004d4174
    PUSH EDX                            ; 004d4179
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d417a
    PUSH ESI                            ; 004d417e
    PUSH EBX                            ; 004d417f
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004319d0 ; 004d4180
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004319d0(CCharacter * this_ptr, int param_2, int param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004d4185
    MOV dword ptr [EBX + 0x20b98],0x0   ; 004d4188
    POP ESI                             ; 004d4192
    POP EBX                             ; 004d4193
    RET                                 ; 004d4194

