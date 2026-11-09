; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_zombie_cpp_FUN_005cac7c(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005ceab0 at 005ceac5
;
; Referenced Globals:
;   void* PTR_TlsAlloc_005d0660 = 001d1250
;   undefined1 DAT_006265df
;   undefined2 DAT_006265e1
;   undefined4 DAT_006265f8
;
; Called Functions:
;   TlsAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cac7c
        ;   Label: unkafter_zombie.cpp_FUN_005cac7c
    MOV EBX,dword ptr [0x006265f8]      ; 005cac7d | DAT_006265f8
    CMP EBX,-0x1                        ; 005cac83
    JNZ 0x005cacc3                      ; 005cac86
        ;   XREF to: 005cacc3 (CONDITIONAL_JUMP)  ; LAB_005cacc3
    CALL dword ptr CS:[0x5d0660]        ; 005cac88 | PTR_TlsAlloc_005d0660
    MOV DX,word ptr [0x006265e1]        ; 005cac8f | DAT_006265e1
    MOV EBX,EAX                         ; 005cac96
    CMP DX,0x8000                       ; 005cac98
    JC 0x005cacc3                       ; 005cac9d
        ;   XREF to: 005cacc3 (CONDITIONAL_JUMP)  ; LAB_005cacc3
    CMP byte ptr [0x006265df],0x4       ; 005cac9f | DAT_006265df
    JNC 0x005cacc3                      ; 005caca6
        ;   XREF to: 005cacc3 (CONDITIONAL_JUMP)  ; LAB_005cacc3
    CMP EBX,-0x1                        ; 005caca8
        ;   Label: LAB_005caca8
    JZ 0x005cacc3                       ; 005cacab
        ;   XREF to: 005cacc3 (CONDITIONAL_JUMP)  ; LAB_005cacc3
    CMP EBX,0x2                         ; 005cacad
    JA 0x005cacc3                       ; 005cacb0
        ;   XREF to: 005cacc3 (CONDITIONAL_JUMP)  ; LAB_005cacc3
    MOV dword ptr [0x006265f8],EBX      ; 005cacb2 | DAT_006265f8
    CALL dword ptr CS:[0x5d0660]        ; 005cacb8 | PTR_TlsAlloc_005d0660
    MOV EBX,EAX                         ; 005cacbf
    JMP 0x005caca8                      ; 005cacc1
        ;   XREF to: 005caca8 (UNCONDITIONAL_JUMP)  ; LAB_005caca8
    CMP EBX,-0x1                        ; 005cacc3
        ;   Label: LAB_005cacc3
    SETNZ AL                            ; 005cacc6
    AND EAX,0xff                        ; 005cacc9
    MOV dword ptr [0x006265f8],EBX      ; 005cacce | DAT_006265f8
    POP EBX                             ; 005cacd4
    RET                                 ; 005cacd5

