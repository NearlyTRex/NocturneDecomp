; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_prye_cpp_FUN_0051c0a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_prye.cpp_FUN_00518cd0 at 00519ade
;   core_prye.cpp_FUN_0051c1c0 at 0051ddf7
;
; Referenced Globals:
;   undefined4 DAT_007e1a50
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c0a0
        ;   Label: core_prye.cpp_FUN_0051c0a0
    SUB ESP,0x4                         ; 0051c0a1
    MOV EDX,dword ptr [0x007e1a50]      ; 0051c0a4 | DAT_007e1a50
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051c0aa
    PUSH EDX                            ; 0051c0ae
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 0051c0af
    PUSH ECX                            ; 0051c0b5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0051c0b6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0051c0bb
    TEST EAX,EAX                        ; 0051c0be
    JZ 0x0051c0e1                       ; 0051c0c0
        ;   XREF to: 0051c0e1 (CONDITIONAL_JUMP)  ; LAB_0051c0e1
    MOV EBX,dword ptr [EAX + 0x6e8]     ; 0051c0c2
    CMP EBX,0x2                         ; 0051c0c8
    JZ 0x0051c0d2                       ; 0051c0cb
        ;   XREF to: 0051c0d2 (CONDITIONAL_JUMP)  ; LAB_0051c0d2
    CMP EBX,0x3                         ; 0051c0cd
    JNZ 0x0051c0e1                      ; 0051c0d0
        ;   XREF to: 0051c0e1 (CONDITIONAL_JUMP)  ; LAB_0051c0e1
    MOV dword ptr [ESP],0xbf860a92      ; 0051c0d2
        ;   Label: LAB_0051c0d2
    MOV EAX,dword ptr [ESP]             ; 0051c0d9
    ADD ESP,0x4                         ; 0051c0dc
    POP EBX                             ; 0051c0df
    RET                                 ; 0051c0e0
    MOV dword ptr [ESP],0xbfc80fc6      ; 0051c0e1
        ;   Label: LAB_0051c0e1
    MOV EAX,dword ptr [ESP]             ; 0051c0e8
    ADD ESP,0x4                         ; 0051c0eb
    POP EBX                             ; 0051c0ee
    RET                                 ; 0051c0ef

