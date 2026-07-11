; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d2d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[9]:
;   FUN_0041ec60 at 0041ec70
;   FUN_004244b0 at 004244bc
;   FUN_0044bb10 at 0044bb1f
;   FUN_004796c0 at 004796d8
;   FUN_004b49a0 at 004b49c1
;   FUN_004eed10 at 004eed7f
;   FUN_004f6fa0 at 004f6fac
;   FUN_00548170 at 00548177
;   FUN_00554170 at 0055417f
;
; Referenced Globals:
;   string s_location_00577f05
;   string s_orient_00577f0e
;   undefined4 DAT_00577f15
;   string s_wasCreated_00577f19
;   string s_createProb_00577f24
;   string s_createEvent_00577f2f
;   undefined4 DAT_005acc88
;
; Called Functions:
;   FUN_0040c4f0
;   FUN_0040c590
;   FUN_0040c6d0
;   FUN_0040c880
;   FUN_0040c900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d2d0
        ;   Label: FUN_0040d2d0
    SUB ESP,0x4                         ; 0040d2d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d2d4
    PUSH 0x577f05                       ; 0040d2d8 | = "location"
    LEA EAX,[EBX + 0x20]                ; 0040d2dd
    PUSH EAX                            ; 0040d2e0
    CALL FUN_0040c590                   ; 0040d2e1
        ;   XREF to: 0040c590 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c590()
    ADD ESP,0x8                         ; 0040d2e6
    PUSH 0x577f0e                       ; 0040d2e9 | = "orient"
    LEA EAX,[EBX + 0x30]                ; 0040d2ee
    PUSH EAX                            ; 0040d2f1
    CALL FUN_0040c4f0                   ; 0040d2f2
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c4f0()
    MOV EDX,dword ptr [0x005acc88]      ; 0040d2f7 | DAT_005acc88
    ADD ESP,0x8                         ; 0040d2fd
    CMP EDX,0x7                         ; 0040d300
    JL 0x0040d313                       ; 0040d303
        ;   XREF to: 0040d313 (CONDITIONAL_JUMP)  ; LAB_0040d313
    CMP dword ptr [0x005acc88],0x6      ; 0040d305 | DAT_005acc88
    JGE 0x0040d333                      ; 0040d30c
        ;   XREF to: 0040d333 (CONDITIONAL_JUMP)  ; LAB_0040d333
    ADD ESP,0x4                         ; 0040d30e
    POP EBX                             ; 0040d311
    RET                                 ; 0040d312
    PUSH 0x577f15                       ; 0040d313 | DAT_00577f15
        ;   Label: LAB_0040d313
    LEA EAX,[ESP + 0x4]                 ; 0040d318
    PUSH EAX                            ; 0040d31c
    CALL FUN_0040c880                   ; 0040d31d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0040d322
    CMP dword ptr [0x005acc88],0x6      ; 0040d325 | DAT_005acc88
    JGE 0x0040d333                      ; 0040d32c
        ;   XREF to: 0040d333 (CONDITIONAL_JUMP)  ; LAB_0040d333
    ADD ESP,0x4                         ; 0040d32e
    POP EBX                             ; 0040d331
    RET                                 ; 0040d332
    PUSH 0x577f19                       ; 0040d333 | = "wasCreated"
        ;   Label: LAB_0040d333
    LEA EAX,[EBX + 0x70]                ; 0040d338
    PUSH EAX                            ; 0040d33b
    CALL FUN_0040c900                   ; 0040d33c
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0040d341
    PUSH 0x577f24                       ; 0040d344 | = "createProb"
    LEA EAX,[EBX + 0x74]                ; 0040d349
    PUSH EAX                            ; 0040d34c
    CALL FUN_0040c880                   ; 0040d34d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0040d352
    PUSH 0x577f2f                       ; 0040d355 | = "createEvent"
    ADD EBX,0x78                        ; 0040d35a
    PUSH EBX                            ; 0040d35d
    CALL FUN_0040c6d0                   ; 0040d35e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040d363
    ADD ESP,0x4                         ; 0040d366
    POP EBX                             ; 0040d369
    RET                                 ; 0040d36a

