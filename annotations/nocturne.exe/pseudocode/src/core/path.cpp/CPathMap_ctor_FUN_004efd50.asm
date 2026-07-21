; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_ctor_FUN_004efd50(int param_1)
;
;
; XREF[2]:
;   FUN_004b46d0 at 004b46e4
;   FUN_004ee950 at 004ee964
;
; Referenced Globals:
;   string s_..\\core\\path.cpp_0058cc99
;   string s_Too_many_pathmaps!_0058ccaa
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01e312f8
;
; Called Functions:
;   core_path.cpp_CPathMap_reset_FUN_004f1e10
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efd50
        ;   Label: core_path.cpp_CPathMap_ctor_FUN_004efd50
    PUSH EDI                            ; 004efd51
    MOV EBX,dword ptr [ESP + 0xc]       ; 004efd52
    MOV dword ptr [EBX + 0x138b8],0x7fffffff ; 004efd56
    MOV EAX,dword ptr [EBX + 0x138b8]   ; 004efd60
    MOV dword ptr [EBX + 0x138b4],EAX   ; 004efd66
    PUSH EBX                            ; 004efd6c
    MOV dword ptr [EBX + 0x138b0],EAX   ; 004efd6d
    CALL core_path.cpp_CPathMap_reset_FUN_004f1e10 ; 004efd73
        ;   XREF to: 004f1e10 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_reset_FUN_004f1e10()
    MOV EDX,dword ptr [0x01e312f8]      ; 004efd78 | DAT_01e312f8
    ADD ESP,0x4                         ; 004efd7e
    CMP EDX,0xc8                        ; 004efd81
    JGE 0x004efda3                      ; 004efd87
        ;   XREF to: 004efda3 (CONDITIONAL_JUMP)  ; LAB_004efda3
    MOV EAX,[0x01e312f8]                ; 004efd89 | DAT_01e312f8
        ;   Label: LAB_004efd89
    LEA EDI,[EAX + 0x1]                 ; 004efd8e
    MOV dword ptr [EAX*0x4 + 0x1e312fc],EBX ; 004efd91
    MOV dword ptr [0x01e312f8],EDI      ; 004efd98 | DAT_01e312f8
    MOV EAX,EBX                         ; 004efd9e
    POP EDI                             ; 004efda0
    POP EBX                             ; 004efda1
    RET                                 ; 004efda2
    PUSH ESI                            ; 004efda3
        ;   Label: LAB_004efda3
    MOV ECX,0x58cc99                    ; 004efda4 | = "..\\core\\path.cpp"
    MOV ESI,0x123                       ; 004efda9
    PUSH 0x58ccaa                       ; 004efdae | = "Too many pathmaps!"
    MOV dword ptr [0x01cc4800],ECX      ; 004efdb3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004efdb9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004efdbf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004efdc4
    POP ESI                             ; 004efdc7
    JMP 0x004efd89                      ; 004efdc8
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; LAB_004efd89

