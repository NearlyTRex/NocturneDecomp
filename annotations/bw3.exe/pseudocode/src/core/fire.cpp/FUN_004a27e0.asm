; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a27e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cefd10
;
; Called Functions:
;   core_fire.cpp_CBulletTrail_init_FUN_0049aca0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a27e0
        ;   Label: core_fire.cpp_FUN_004a27e0
    PUSH EDI                            ; 004a27e1
    PUSH EBP                            ; 004a27e2
    MOV EDX,dword ptr [0x01cefd10]      ; 004a27e3 | DAT_01cefd10
    LEA EAX,[EDX*0x8 + 0x0]             ; 004a27e9
    ADD EAX,EDX                         ; 004a27f0
    SHL EAX,0x2                         ; 004a27f2
    INC EDX                             ; 004a27f5
    ADD EAX,0x1cefd14                   ; 004a27f6
    MOV dword ptr [0x01cefd10],EDX      ; 004a27fb | DAT_01cefd10
    CMP EDX,0xa                         ; 004a2801
    JL 0x004a2810                       ; 004a2804
        ;   XREF to: 004a2810 (CONDITIONAL_JUMP)  ; LAB_004a2810
    PUSH EBX                            ; 004a2806
    XOR EBX,EBX                         ; 004a2807
    MOV dword ptr [0x01cefd10],EBX      ; 004a2809 | DAT_01cefd10
    POP EBX                             ; 004a280f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a2810
        ;   Label: LAB_004a2810
    PUSH dword ptr [ESP + 0x20]         ; 004a2814
    PUSH ESI                            ; 004a2818
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a2819
    PUSH EDI                            ; 004a281d
    MOV EBP,dword ptr [ESP + 0x20]      ; 004a281e
    PUSH EBP                            ; 004a2822
    PUSH EAX                            ; 004a2823
    CALL core_fire.cpp_CBulletTrail_init_FUN_0049aca0 ; 004a2824
        ;   XREF to: 0049aca0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_init_FUN_0049aca0(CBulletTrail * this_ptr, CVector3f * start_position, CVector3f * end_position, CKeyFramedModel * model_ptr, ...)
    ADD ESP,0x14                        ; 004a2829
    POP EBP                             ; 004a282c
    POP EDI                             ; 004a282d
    POP ESI                             ; 004a282e
    RET                                 ; 004a282f

