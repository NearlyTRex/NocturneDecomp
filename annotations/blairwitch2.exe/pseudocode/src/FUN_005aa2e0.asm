; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005aa2e0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f0a9b
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa2e0
        ;   Label: FUN_005aa2e0
    PUSH ESI                            ; 005aa2e1
    SUB ESP,0x18                        ; 005aa2e2
    MOV ESI,dword ptr [ESP + 0x24]      ; 005aa2e5
    MOV EBX,dword ptr [ESP + 0x28]      ; 005aa2e9
    FLD float ptr [ESI + 0x113c4]       ; 005aa2ed
    FCOMP double ptr [0x005f0a9b]       ; 005aa2f3 | DAT_005f0a9b
    FNSTSW AX                           ; 005aa2f9
    SAHF                                ; 005aa2fb
    JNC 0x005aa306                      ; 005aa2fc
        ;   XREF to: 005aa306 (CONDITIONAL_JUMP)  ; LAB_005aa306
    XOR EAX,EAX                         ; 005aa2fe
    ADD ESP,0x18                        ; 005aa300
    POP ESI                             ; 005aa303
    POP EBX                             ; 005aa304
    RET                                 ; 005aa305
    PUSH EDI                            ; 005aa306
        ;   Label: LAB_005aa306
    MOV EDX,dword ptr [ESI + 0x11850]   ; 005aa307
    LEA EAX,[EDX*0x4 + 0x0]             ; 005aa30d
    SUB EAX,EDX                         ; 005aa314
    MOV EDX,EAX                         ; 005aa316
    SHL EDX,0x4                         ; 005aa318
    LEA EAX,[ESI + 0x1134]              ; 005aa31b
    ADD EAX,EDX                         ; 005aa321
    PUSH EAX                            ; 005aa323
    PUSH 0x265370c                      ; 005aa324 | DAT_0265370c
    LEA ESI,[ESP + 0xc]                 ; 005aa329
    LEA EDI,[ESP + 0x18]                ; 005aa32d
    CALL FUN_00591530                   ; 005aa331
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0xc]                 ; 005aa336
    ADD ESP,0x8                         ; 005aa33a
    LEA EAX,[ESP + 0x10]                ; 005aa33d
    MOVSD ES:EDI,ESI                    ; 005aa341
    MOVSD ES:EDI,ESI                    ; 005aa342
    MOVSD ES:EDI,ESI                    ; 005aa343
    CMP EBX,EAX                         ; 005aa344
    JZ 0x005aa35c                       ; 005aa346
        ;   XREF to: 005aa35c (CONDITIONAL_JUMP)  ; LAB_005aa35c
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aa348
    MOV dword ptr [EBX],EAX             ; 005aa34c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa34e
    MOV dword ptr [EBX + 0x4],EAX       ; 005aa352
    MOV EAX,dword ptr [ESP + 0x18]      ; 005aa355
    MOV dword ptr [EBX + 0x8],EAX       ; 005aa359
    MOV EAX,0x1                         ; 005aa35c
        ;   Label: LAB_005aa35c
    POP EDI                             ; 005aa361
    ADD ESP,0x18                        ; 005aa362
    POP ESI                             ; 005aa365
    POP EBX                             ; 005aa366
    RET                                 ; 005aa367

