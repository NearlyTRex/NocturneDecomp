; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4800(int param_1)
;
;
; Referenced Globals:
;   void* PTR_FUN_0059eb34 = 004b48d0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_004bee60
;   FUN_004efdd0
;   FUN_0051b6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4800
        ;   Label: FUN_004b4800
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b4801
    MOV dword ptr [EDX + 0x14c],0x59eb34 ; 004b4805 | PTR_FUN_0059eb34
    XOR EAX,EAX                         ; 004b480f
    CMP EDX,dword ptr [EAX + 0x1cae0d8] ; 004b4811
        ;   Label: LAB_004b4811
    JZ 0x004b48b9                       ; 004b4817
        ;   XREF to: 004b48b9 (CONDITIONAL_JUMP)  ; LAB_004b48b9
    ADD EAX,0x4                         ; 004b481d
        ;   Label: LAB_004b481d
    CMP EAX,0x10                        ; 004b4820
    JNZ 0x004b4811                      ; 004b4823
        ;   XREF to: 004b4811 (CONDITIONAL_JUMP)  ; LAB_004b4811
    PUSH 0x0                            ; 004b4825
    ADD EDX,0x1f5a0                     ; 004b4827
    PUSH EDX                            ; 004b482d
    CALL FUN_004bee60                   ; 004b482e
        ;   XREF to: 004bee60 (UNCONDITIONAL_CALL)  ; undefined FUN_004bee60()
    ADD ESP,0x8                         ; 004b4833
    PUSH 0x0                            ; 004b4836
    SUB EAX,0x138e0                     ; 004b4838
    PUSH EAX                            ; 004b483d
    CALL FUN_004efdd0                   ; 004b483e
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004efdd0()
    ADD ESP,0x8                         ; 004b4843
    PUSH 0x0                            ; 004b4846
    SUB EAX,0x88fc                      ; 004b4848
    PUSH EAX                            ; 004b484d
    CALL FUN_0040fe50                   ; 004b484e
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 004b4853
    PUSH 0x0                            ; 004b4856
    SUB EAX,0x4b0                       ; 004b4858
    PUSH EAX                            ; 004b485d
    CALL FUN_0040fe30                   ; 004b485e
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 004b4863
    PUSH 0x0                            ; 004b4866
    SUB EAX,0x20c                       ; 004b4868
    PUSH EAX                            ; 004b486d
    CALL FUN_0040fe10                   ; 004b486e
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b4873
    PUSH 0x0                            ; 004b4876
    SUB EAX,0xb4                        ; 004b4878
    PUSH EAX                            ; 004b487d
    CALL FUN_0040fe10                   ; 004b487e
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b4883
    PUSH 0x0                            ; 004b4886
    SUB EAX,0x1c8                       ; 004b4888
    PUSH EAX                            ; 004b488d
    CALL FUN_00438250                   ; 004b488e
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004b4893
    PUSH 0x0                            ; 004b4896
    SUB EAX,0x293c                      ; 004b4898
    PUSH EAX                            ; 004b489d
    CALL FUN_0051b6e0                   ; 004b489e
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004b48a3
    PUSH 0x1                            ; 004b48a6
    LEA EDX,[EAX + 0xfffffeb0]          ; 004b48a8
    PUSH EDX                            ; 004b48ae
    CALL FUN_00409ea0                   ; 004b48af
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004b48b4
    POP EBX                             ; 004b48b7
    RET                                 ; 004b48b8
    XOR EBX,EBX                         ; 004b48b9
        ;   Label: LAB_004b48b9
    MOV dword ptr [EAX + 0x1cae0d8],EBX ; 004b48bb
    JMP 0x004b481d                      ; 004b48c1
        ;   XREF to: 004b481d (UNCONDITIONAL_JUMP)  ; LAB_004b481d

