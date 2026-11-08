; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c2a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_004203f0 at 0042040e
;   FUN_004b7f90 at 004b81de
;   FUN_00542940 at 0054298e
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb1fc
;   TerminatedCString s_CDemonCamera_init_Unable_005bb20f
;   undefined4 DAT_005bb244
;   undefined4 DAT_005f18dc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_0045c380
;   FUN_0045db40
;   FUN_004e4330
;   FUN_005a3120
;   FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c2a0
        ;   Label: FUN_0045c2a0
    PUSH EBP                            ; 0045c2a1
    SUB ESP,0x4                         ; 0045c2a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045c2a5
    PUSH EBX                            ; 0045c2a9
    CALL FUN_0045c380                   ; 0045c2aa
        ;   XREF to: 0045c380 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c380()
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0045c2af
    IMUL EDX,dword ptr [EBX + 0x1cc4]   ; 0045c2b5
    ADD EDX,EDX                         ; 0045c2bc
    ADD ESP,0x4                         ; 0045c2be
    ADD EDX,0x210                       ; 0045c2c1
    PUSH EDX                            ; 0045c2c7
    CALL FUN_005a3650                   ; 0045c2c8
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 0045c2cd
    MOV dword ptr [EBX + 0x2f98],EAX    ; 0045c2d0
    TEST EAX,EAX                        ; 0045c2d6
    JZ 0x0045c34c                       ; 0045c2d8
        ;   XREF to: 0045c34c (CONDITIONAL_JUMP)  ; LAB_0045c34c
    MOV EAX,dword ptr [EBX + 0x2f98]    ; 0045c2da
        ;   Label: LAB_0045c2da
    ADD EAX,0x10                        ; 0045c2e0
    AND AL,0xf0                         ; 0045c2e3
    MOV dword ptr [EBX + 0x2f94],EAX    ; 0045c2e5
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0045c2eb
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0045c2f1
    IMUL EDX,EAX                        ; 0045c2f7
    MOV EAX,EDX                         ; 0045c2fa
    SAR EDX,0x1f                        ; 0045c2fc
    SHL EDX,0x3                         ; 0045c2ff
    SBB EAX,EDX                         ; 0045c302
    SAR EAX,0x3                         ; 0045c304
    PUSH EAX                            ; 0045c307
    CALL FUN_005a3650                   ; 0045c308
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    FLD float ptr [EBX + 0x2fa8]        ; 0045c30d
    FMUL double ptr [0x005bb244]        ; 0045c313 | DAT_005bb244
    ADD ESP,0x4                         ; 0045c319
    MOV dword ptr [EBX + 0x2fa0],EAX    ; 0045c31c
    PUSH 0x0                            ; 0045c322
    CALL FUN_005a3120                   ; 0045c324
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH 0x0                            ; 0045c329
    FISTP dword ptr [ESP + 0x8]         ; 0045c32b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045c32f
    PUSH 0x0                            ; 0045c333
    MOV EDX,dword ptr [EAX*0x4 + 0x5f18dc] ; 0045c335 | DAT_005f18dc
    PUSH EDX                            ; 0045c33c
    PUSH EBX                            ; 0045c33d
    CALL FUN_0045db40                   ; 0045c33e
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db40()
    ADD ESP,0x14                        ; 0045c343
    ADD ESP,0x4                         ; 0045c346
    POP EBP                             ; 0045c349
    POP EBX                             ; 0045c34a
    RET                                 ; 0045c34b
    PUSH EDI                            ; 0045c34c
        ;   Label: LAB_0045c34c
    MOV EDI,0x5bb1fc                    ; 0045c34d | = "..\\core\\dlight.cpp"
    MOV EBP,0x6c                        ; 0045c352
    PUSH 0x5bb20f                       ; 0045c357 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01d71de0],EDI      ; 0045c35c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0045c362 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0045c368
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0045c36d
    POP EDI                             ; 0045c370
    JMP 0x0045c2da                      ; 0045c371
        ;   XREF to: 0045c2da (UNCONDITIONAL_JUMP)  ; LAB_0045c2da

