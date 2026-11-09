; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cb9c0(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_unknown.c_FUN_005c65a0 at 005c65b9
;
; Referenced Globals:
;   void* PTR_WriteConsoleA_005d0688 = 001d12f8
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_00626774
;   undefined4 DAT_006267b0
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   unkafter_zombie.cpp_FUN_005cd0cc
;   WriteConsoleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb9c0
        ;   Label: unkafter_zombie.cpp_FUN_005cb9c0
    SUB ESP,0x8                         ; 005cb9c1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005cb9c4
    MOV EDX,dword ptr [0x006267b0]      ; 005cb9c8 | DAT_006267b0
    MOV byte ptr [ESP + 0x4],BL         ; 005cb9ce
    TEST EDX,EDX                        ; 005cb9d2
    JZ 0x005cb9ee                       ; 005cb9d4
        ;   XREF to: 005cb9ee (CONDITIONAL_JUMP)  ; LAB_005cb9ee
    PUSH 0x1                            ; 005cb9d6
    CALL dword ptr [0x00626774]         ; 005cb9d8 | DAT_00626774
    ADD ESP,0x4                         ; 005cb9de
    PUSH EBX                            ; 005cb9e1
    PUSH EAX                            ; 005cb9e2
    CALL dword ptr [0x006267b0]         ; 005cb9e3 | DAT_006267b0
    ADD ESP,0x8                         ; 005cb9e9
    JMP 0x005cba1f                      ; 005cb9ec
        ;   XREF to: 005cba1f (UNCONDITIONAL_JUMP)  ; LAB_005cba1f
    PUSH 0x1                            ; 005cb9ee
        ;   Label: LAB_005cb9ee
    CALL dword ptr [0x00626600]         ; 005cb9f0 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    ADD ESP,0x4                         ; 005cb9f6
    CALL unkafter_zombie.cpp_FUN_005cd0cc ; 005cb9f9
        ;   XREF to: 005cd0cc (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cd0cc()
    PUSH 0x0                            ; 005cb9fe
    LEA EDX,[ESP + 0x4]                 ; 005cba00
    PUSH EDX                            ; 005cba04
    PUSH 0x1                            ; 005cba05
    LEA EDX,[ESP + 0x10]                ; 005cba07
    PUSH EDX                            ; 005cba0b
    PUSH EAX                            ; 005cba0c
    CALL dword ptr CS:[0x5d0688]        ; 005cba0d | PTR_WriteConsoleA_005d0688
    PUSH 0x1                            ; 005cba14
    CALL dword ptr [0x00626604]         ; 005cba16 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005cba1c
    MOV EAX,EBX                         ; 005cba1f
        ;   Label: LAB_005cba1f
    ADD ESP,0x8                         ; 005cba21
    POP EBX                             ; 005cba24
    RET                                 ; 005cba25

