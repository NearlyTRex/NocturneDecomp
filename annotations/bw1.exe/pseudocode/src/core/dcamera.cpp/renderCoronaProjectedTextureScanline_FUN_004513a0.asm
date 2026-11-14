; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004513a0(int scanline_y,int x_start,int x_end)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
;
; Referenced Globals:
;   undefined4 DAT_00b81c9c
;   undefined4 DAT_00b81ca0
;   undefined4 DAT_01323cd4
;   undefined4 DAT_01323ce0
;   undefined4 DAT_01323cec
;   undefined4 DAT_01323cf8
;   undefined4 DAT_01323d00
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004513a0
        ;   Label: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004513a0
    PUSH ESI                            ; 004513a1
    PUSH EDI                            ; 004513a2
    PUSH EBP                            ; 004513a3
    MOV EBP,ESP                         ; 004513a4
    SUB ESP,0x2c                        ; 004513a6
    AND ESP,0xfffffff8                  ; 004513a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004513ac
    MOV EAX,EDI                         ; 004513af
    SHL EAX,0x8                         ; 004513b1
    MOV ECX,0x939bd8                    ; 004513b4
    MOV ESI,EAX                         ; 004513b9
    MOV EDX,dword ptr [EBP + 0x18]      ; 004513bb
    SHL ESI,0x4                         ; 004513be
    LEA EBX,[EDX*0x4 + 0x0]             ; 004513c1
    SUB ESI,EAX                         ; 004513c8
    LEA EAX,[EDI*0x4 + 0x0]             ; 004513ca
    SUB EBX,EDX                         ; 004513d1
    ADD EAX,EDI                         ; 004513d3
    SHL EBX,0x2                         ; 004513d5
    SHL EAX,0x6                         ; 004513d8
    ADD ECX,ESI                         ; 004513db
    ADD EAX,0xb10718                    ; 004513dd
    ADD ECX,EBX                         ; 004513e2
    ADD EDX,EAX                         ; 004513e4
    LEA EAX,[EDI*0x4 + 0x0]             ; 004513e6
    MOV dword ptr [ESP + 0x28],EDX      ; 004513ed
    ADD EAX,EDI                         ; 004513f1
    MOV EDX,dword ptr [EBP + 0x18]      ; 004513f3
    SHL EAX,0x8                         ; 004513f6
    SHL EDX,0x2                         ; 004513f9
    ADD EAX,0x14df1d0                   ; 004513fc
    MOV dword ptr [ESP + 0x1c],ECX      ; 00451401
    ADD EAX,EDX                         ; 00451405
    MOV CL,byte ptr [0x01323d00]        ; 00451407 | DAT_01323d00
    MOV dword ptr [ESP + 0x24],EAX      ; 0045140d
    MOV EDX,EDI                         ; 00451411
    MOV EAX,dword ptr [EBP + 0x18]      ; 00451413
    SHL EDX,CL                          ; 00451416
    SHL EAX,CL                          ; 00451418
    MOV EDX,dword ptr [EDX*0x4 + 0x1c4480c] ; 0045141a
    SHL EAX,0x2                         ; 00451421
    ADD ESI,0xa1bad8                    ; 00451424
    ADD EDX,EAX                         ; 0045142a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045142c
    MOV dword ptr [ESP + 0x20],EDX      ; 0045142f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00451433
    ADD EBX,ESI                         ; 00451436
    CMP EAX,EDX                         ; 00451438
    JGE 0x0045159c                      ; 0045143a
        ;   XREF to: 0045159c (CONDITIONAL_JUMP)  ; LAB_0045159c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00451440
        ;   Label: LAB_00451440
    MOV EAX,dword ptr [ESP + 0x20]      ; 00451444
    MOV ESI,dword ptr [EDX]             ; 00451448
    CMP ESI,dword ptr [EAX]             ; 0045144a
    JBE 0x0045154e                      ; 0045144c
        ;   XREF to: 0045154e (CONDITIONAL_JUMP)  ; LAB_0045154e
    FLD float ptr [EBX + 0x4]           ; 00451452
    FMUL float ptr [0x01323cec]         ; 00451455 | DAT_01323cec
    FLD float ptr [EBX]                 ; 0045145b
    FMUL float ptr [0x01323ce0]         ; 0045145d | DAT_01323ce0
    FADDP                               ; 00451463
    FLD float ptr [EBX + 0x8]           ; 00451465
    FMUL float ptr [0x01323cf8]         ; 00451468 | DAT_01323cf8
    FADDP                               ; 0045146e
    FLDZ                                ; 00451470
    FCOMPP                              ; 00451472
    FNSTSW AX                           ; 00451474
    SAHF                                ; 00451476
    JA 0x0045154e                       ; 00451477
        ;   XREF to: 0045154e (CONDITIONAL_JUMP)  ; LAB_0045154e
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045147d
    PUSH EDI                            ; 00451481
    MOV EAX,[0x01323cd4]                ; 00451482 | DAT_01323cd4
    PUSH EAX                            ; 00451487
    LEA ESI,[ESP + 0x14]                ; 00451488
    LEA EDI,[ESP + 0x8]                 ; 0045148c
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0 ; 00451490
        ;   XREF to: 0044e2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x14]                ; 00451495
    ADD ESP,0x8                         ; 00451499
    MOVSD ES:EDI,ESI                    ; 0045149c
    MOVSD ES:EDI,ESI                    ; 0045149d
    MOVSD ES:EDI,ESI                    ; 0045149e
    CMP dword ptr [ESP + 0x8],0x0       ; 0045149f
    JLE 0x0045154e                      ; 004514a4
        ;   XREF to: 0045154e (CONDITIONAL_JUMP)  ; LAB_0045154e
    MOV ESI,dword ptr [ESP + 0x4]       ; 004514aa
    MOV EAX,[0x01323cd4]                ; 004514ae | DAT_01323cd4
    SAR ESI,0x10                        ; 004514b3
    IMUL ESI,dword ptr [EAX + 0x1cc0]   ; 004514b6
    MOV EDX,dword ptr [ESP]             ; 004514bd
    SAR EDX,0x10                        ; 004514c0
    ADD EDX,ESI                         ; 004514c3
    MOV ESI,dword ptr [EAX + 0x2f94]    ; 004514c5
    MOV DX,word ptr [ESI + EDX*0x2]     ; 004514cb
    MOV ESI,dword ptr [0x00b81c9c]      ; 004514cf | DAT_00b81c9c
    AND EDX,0xffff                      ; 004514d5
    CMP EDX,ESI                         ; 004514db
    JGE 0x0045154e                      ; 004514dd
        ;   XREF to: 0045154e (CONDITIONAL_JUMP)  ; LAB_0045154e
    MOV EDI,dword ptr [ESP + 0x8]       ; 004514df
    LEA ESI,[EDX + 0x80]                ; 004514e3
    CMP ESI,EDI                         ; 004514e9
    JLE 0x0045154e                      ; 004514eb
        ;   XREF to: 0045154e (CONDITIONAL_JUMP)  ; LAB_0045154e
    MOV ESI,dword ptr [ESP]             ; 004514ed
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 004514f0
    SAR ESI,CL                          ; 004514f6
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 004514f8
    AND ECX,ESI                         ; 004514fe
    MOV ESI,dword ptr [ESP + 0x4]       ; 00451500
    MOV dword ptr [ESP + 0x18],ECX      ; 00451504
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 00451508
    SAR ESI,CL                          ; 0045150e
    AND ESI,dword ptr [EAX + 0x1c68]    ; 00451510
    MOV CL,byte ptr [EAX + 0x1c60]      ; 00451516
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045151c
    SHL ESI,CL                          ; 00451520
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00451522
    ADD ESI,EDI                         ; 00451528
    MOVZX ESI,byte ptr [ESI + EAX*0x1]  ; 0045152a
    MOV EAX,[0x00b81c9c]                ; 0045152e | DAT_00b81c9c
    SUB EAX,EDX                         ; 00451533
    MOV EDX,EAX                         ; 00451535
    IMUL EDX,ESI                        ; 00451537
    MOV CL,byte ptr [0x00b81ca0]        ; 0045153a | DAT_00b81ca0
    SAR EDX,CL                          ; 00451540
    MOV ECX,dword ptr [ESP + 0x28]      ; 00451542
    XOR EAX,EAX                         ; 00451546
    MOV AL,byte ptr [ECX]               ; 00451548
    ADD EAX,EDX                         ; 0045154a
    MOV byte ptr [ECX],AL               ; 0045154c
    MOV EAX,0x1                         ; 0045154e
        ;   Label: LAB_0045154e
    MOV ESI,dword ptr [ESP + 0x24]      ; 00451553
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00451557
    MOV EDX,dword ptr [EBP + 0x18]      ; 0045155b
    MOV CL,byte ptr [0x01323d00]        ; 0045155e | DAT_01323d00
    ADD EBX,0xc                         ; 00451564
    ADD ESI,0x4                         ; 00451567
    ADD EDI,0xc                         ; 0045156a
    INC EDX                             ; 0045156d
    SHL EAX,CL                          ; 0045156e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00451570
    SHL EAX,0x2                         ; 00451574
    MOV dword ptr [ESP + 0x24],ESI      ; 00451577
    MOV dword ptr [ESP + 0x1c],EDI      ; 0045157b
    MOV dword ptr [EBP + 0x18],EDX      ; 0045157f
    ADD ECX,EAX                         ; 00451582
    MOV EAX,dword ptr [ESP + 0x28]      ; 00451584
    MOV dword ptr [ESP + 0x20],ECX      ; 00451588
    INC EAX                             ; 0045158c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0045158d
    MOV dword ptr [ESP + 0x28],EAX      ; 00451590
    CMP EDX,ECX                         ; 00451594
    JL 0x00451440                       ; 00451596
        ;   XREF to: 00451440 (CONDITIONAL_JUMP)  ; LAB_00451440
    MOV ESP,EBP                         ; 0045159c
        ;   Label: LAB_0045159c
    POP EBP                             ; 0045159e
    POP EDI                             ; 0045159f
    POP ESI                             ; 004515a0
    POP EBX                             ; 004515a1
    RET                                 ; 004515a2

