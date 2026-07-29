; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004cbbc0(CMirrorHack *this_ptr,float delta_time)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_0058816a = 6.28318530700000
;   double DOUBLE_00588172 = 30
;   double DOUBLE_0058817a = 0.200000000000000
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbbc0
        ;   Label: core_manpuz.cpp_CMirrorHack_process_FUN_004cbbc0
    PUSH EBP                            ; 004cbbc1
    MOV EBP,ESP                         ; 004cbbc2
    SUB ESP,0x4                         ; 004cbbc4
    AND ESP,0xfffffff8                  ; 004cbbc7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004cbbca
    FLD float ptr [EBP + 0x10]          ; 004cbbcd
    FMUL double ptr [0x0058816a]        ; 004cbbd0 | DOUBLE_0058816a
    FDIV double ptr [0x00588172]        ; 004cbbd6 | DOUBLE_00588172
    PUSH 0x38                           ; 004cbbdc
    MOV EAX,[0x005bac64]                ; 004cbbde | INT_005bac64
    PUSH EAX                            ; 004cbbe3 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cbbe4 | DAT_01cc30e4
    FSTP float ptr [ESP + 0x8]          ; 004cbbe6
    CALL dword ptr [EDX]                ; 004cbbea
    ADD ESP,0x8                         ; 004cbbec
    TEST EAX,EAX                        ; 004cbbef
    JZ 0x004cbbff                       ; 004cbbf1
        ;   XREF to: 004cbbff (CONDITIONAL_JUMP)  ; LAB_004cbbff
    FLD float ptr [ESP]                 ; 004cbbf3
    FMUL double ptr [0x0058817a]        ; 004cbbf6 | DOUBLE_0058817a
    FSTP float ptr [ESP]                ; 004cbbfc
    PUSH 0x33                           ; 004cbbff
        ;   Label: LAB_004cbbff
    MOV EAX,[0x005bac64]                ; 004cbc01 | INT_005bac64
    PUSH EAX                            ; 004cbc06 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cbc07 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004cbc09
    ADD ESP,0x8                         ; 004cbc0b
    TEST EAX,EAX                        ; 004cbc0e
    JZ 0x004cbc1b                       ; 004cbc10
        ;   XREF to: 004cbc1b (CONDITIONAL_JUMP)  ; LAB_004cbc1b
    FLD float ptr [EBX + 0x34]          ; 004cbc12
    FSUB float ptr [ESP]                ; 004cbc15
    FSTP float ptr [EBX + 0x34]         ; 004cbc18
    PUSH 0x34                           ; 004cbc1b
        ;   Label: LAB_004cbc1b
    MOV EAX,[0x005bac64]                ; 004cbc1d | INT_005bac64
    PUSH EAX                            ; 004cbc22 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cbc23 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004cbc25
    ADD ESP,0x8                         ; 004cbc27
    TEST EAX,EAX                        ; 004cbc2a
    JZ 0x004cbc37                       ; 004cbc2c
        ;   XREF to: 004cbc37 (CONDITIONAL_JUMP)  ; LAB_004cbc37
    FLD float ptr [EBX + 0x34]          ; 004cbc2e
    FADD float ptr [ESP]                ; 004cbc31
    FSTP float ptr [EBX + 0x34]         ; 004cbc34
    PUSH EBX                            ; 004cbc37
        ;   Label: LAB_004cbc37
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004cbc38
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cbc3d
    MOV ESP,EBP                         ; 004cbc40
    POP EBP                             ; 004cbc42
    POP EBX                             ; 004cbc43
    RET                                 ; 004cbc44

