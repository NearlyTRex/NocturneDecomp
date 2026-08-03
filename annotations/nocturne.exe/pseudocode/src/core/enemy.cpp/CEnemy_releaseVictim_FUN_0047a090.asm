; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a090
        ;   Label: core_enemy.cpp_CEnemy_releaseVictim_FUN_0047a090
    SUB ESP,0xc                         ; 0047a091
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047a094
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 0047a098
    TEST EDX,EDX                        ; 0047a09e
    JNZ 0x0047a0a7                      ; 0047a0a0
        ;   XREF to: 0047a0a7 (CONDITIONAL_JUMP)  ; LAB_0047a0a7
    ADD ESP,0xc                         ; 0047a0a2
        ;   Label: LAB_0047a0a2
    POP EBX                             ; 0047a0a5
    RET                                 ; 0047a0a6
    MOV EAX,EDX                         ; 0047a0a7
        ;   Label: LAB_0047a0a7
    PUSH EAX                            ; 0047a0a9
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0047a0aa
    CALL dword ptr [EDX + 0xec]         ; 0047a0b0
    ADD ESP,0x4                         ; 0047a0b6
    CMP EAX,EBX                         ; 0047a0b9
    JNZ 0x0047a0a2                      ; 0047a0bb
        ;   XREF to: 0047a0a2 (CONDITIONAL_JUMP)  ; LAB_0047a0a2
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0047a0bd
    PUSH EAX                            ; 0047a0c3
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0047a0c4
    CALL dword ptr [EDX + 0xe8]         ; 0047a0ca
    MOV ECX,dword ptr [EBX + 0x68]      ; 0047a0d0
    ADD ESP,0x4                         ; 0047a0d3
    CMP ECX,0x78a123                    ; 0047a0d6 | DAT_0078a123
    JNZ 0x0047a10f                      ; 0047a0dc
        ;   XREF to: 0047a10f (CONDITIONAL_JUMP)  ; LAB_0047a10f
    LEA EAX,[EBX + 0x150]               ; 0047a0de
    CMP dword ptr [EAX + 0x22b0],0x0    ; 0047a0e4
    JZ 0x0047a10f                       ; 0047a0eb
        ;   XREF to: 0047a10f (CONDITIONAL_JUMP)  ; LAB_0047a10f
    PUSH EDI                            ; 0047a0ed
    MOV dword ptr [ESP + 0xc],0xba83126f ; 0047a0ee
    LEA EAX,[ESP + 0x4]                 ; 0047a0f6
    PUSH EAX                            ; 0047a0fa
    XOR EDI,EDI                         ; 0047a0fb
    PUSH EBX                            ; 0047a0fd
    MOV dword ptr [ESP + 0xc],EDI       ; 0047a0fe
    MOV dword ptr [ESP + 0x10],EDI      ; 0047a102
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0047a106
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0047a10b
    POP EDI                             ; 0047a10e
    MOV dword ptr [EBX + 0xbca4],0x0    ; 0047a10f
        ;   Label: LAB_0047a10f
    ADD ESP,0xc                         ; 0047a119
    POP EBX                             ; 0047a11c
    RET                                 ; 0047a11d

