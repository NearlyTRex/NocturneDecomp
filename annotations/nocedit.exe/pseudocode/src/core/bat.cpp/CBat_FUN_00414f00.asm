; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bat_cpp_CBat_FUN_00414f00(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00615426 = 0.25
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_bat.cpp_FUN_00414ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414f00
        ;   Label: core_bat.cpp_CBat_FUN_00414f00
    PUSH EBP                            ; 00414f01
    MOV EBP,ESP                         ; 00414f02
    SUB ESP,0x4                         ; 00414f04
    AND ESP,0xfffffff8                  ; 00414f07
    MOV EBX,dword ptr [EBP + 0xc]       ; 00414f0a
    PUSH 0x2a                           ; 00414f0d
    MOV EAX,[0x0067cf44]                ; 00414f0f | g_CKeysPtr
    MOV EDX,0x3f800000                  ; 00414f14
    PUSH EAX                            ; 00414f19 | g_CKeysInstance
    MOV dword ptr [ESP + 0x8],EDX       ; 00414f1a
    MOV EDX,dword ptr [EAX]             ; 00414f1e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00414f20
    ADD ESP,0x8                         ; 00414f22
    TEST EAX,EAX                        ; 00414f25
    JZ 0x00414f30                       ; 00414f27
        ;   XREF to: 00414f30 (CONDITIONAL_JUMP)  ; LAB_00414f30
    MOV dword ptr [ESP],0x40800000      ; 00414f29
    PUSH 0x38                           ; 00414f30
        ;   Label: LAB_00414f30
    MOV EAX,[0x0067cf44]                ; 00414f32 | g_CKeysPtr
    PUSH EAX                            ; 00414f37 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414f38 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00414f3a
    ADD ESP,0x8                         ; 00414f3c
    TEST EAX,EAX                        ; 00414f3f
    JZ 0x00414f4f                       ; 00414f41
        ;   XREF to: 00414f4f (CONDITIONAL_JUMP)  ; LAB_00414f4f
    FLD float ptr [ESP]                 ; 00414f43
    FMUL double ptr [0x00615426]        ; 00414f46 | DOUBLE_00615426
    FSTP float ptr [ESP]                ; 00414f4c
    PUSH 0x34                           ; 00414f4f
        ;   Label: LAB_00414f4f
    MOV EAX,[0x0067cf44]                ; 00414f51 | g_CKeysPtr
    PUSH EAX                            ; 00414f56 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414f57 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00414f59
    ADD ESP,0x8                         ; 00414f5c
    TEST EAX,EAX                        ; 00414f5f
    JZ 0x00414f72                       ; 00414f61
        ;   XREF to: 00414f72 (CONDITIONAL_JUMP)  ; LAB_00414f72
    FLD float ptr [EBX + 0x304]         ; 00414f63
    FADD float ptr [ESP]                ; 00414f69
    FSTP float ptr [EBX + 0x304]        ; 00414f6c
    PUSH 0x33                           ; 00414f72
        ;   Label: LAB_00414f72
    MOV EAX,[0x0067cf44]                ; 00414f74 | g_CKeysPtr
    PUSH EAX                            ; 00414f79 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00414f7a | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00414f7c
    ADD ESP,0x8                         ; 00414f7f
    TEST EAX,EAX                        ; 00414f82
    JZ 0x00414f95                       ; 00414f84
        ;   XREF to: 00414f95 (CONDITIONAL_JUMP)  ; LAB_00414f95
    FLD float ptr [EBX + 0x304]         ; 00414f86
    FSUB float ptr [ESP]                ; 00414f8c
    FSTP float ptr [EBX + 0x304]        ; 00414f8f
    PUSH EBX                            ; 00414f95
        ;   Label: LAB_00414f95
    CALL core_bat.cpp_FUN_00414ce0      ; 00414f96
        ;   XREF to: 00414ce0 (UNCONDITIONAL_CALL)  ; undefined core_bat.cpp_FUN_00414ce0()
    ADD ESP,0x4                         ; 00414f9b
    MOV ESP,EBP                         ; 00414f9e
    POP EBP                             ; 00414fa0
    POP EBX                             ; 00414fa1
    RET                                 ; 00414fa2

