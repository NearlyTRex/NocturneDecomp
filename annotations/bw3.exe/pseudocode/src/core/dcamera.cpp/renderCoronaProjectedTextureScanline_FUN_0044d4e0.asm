; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_0044d4e0(int scanline_y,int x_start,int x_end)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
;
; Referenced Globals:
;   undefined4 DAT_00b9e54c
;   undefined4 DAT_00b9e550
;   undefined4 DAT_01340584
;   undefined4 DAT_01340590
;   undefined4 DAT_0134059c
;   undefined4 DAT_013405a8
;   undefined4 DAT_013405b0
;
; Called Functions:
;   core_dcamera.cpp_FUN_0044a3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d4e0
        ;   Label: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_0044d4e0
    PUSH ESI                            ; 0044d4e1
    PUSH EDI                            ; 0044d4e2
    PUSH EBP                            ; 0044d4e3
    MOV EBP,ESP                         ; 0044d4e4
    SUB ESP,0x2c                        ; 0044d4e6
    AND ESP,0xfffffff8                  ; 0044d4e9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044d4ec
    MOV EAX,EDI                         ; 0044d4ef
    SHL EAX,0x8                         ; 0044d4f1
    MOV ECX,0x956488                    ; 0044d4f4
    MOV ESI,EAX                         ; 0044d4f9
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044d4fb
    SHL ESI,0x4                         ; 0044d4fe
    LEA EBX,[EDX*0x4 + 0x0]             ; 0044d501
    SUB ESI,EAX                         ; 0044d508
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044d50a
    SUB EBX,EDX                         ; 0044d511
    ADD EAX,EDI                         ; 0044d513
    SHL EBX,0x2                         ; 0044d515
    SHL EAX,0x6                         ; 0044d518
    ADD ECX,ESI                         ; 0044d51b
    ADD EAX,0xb2cfc8                    ; 0044d51d
    ADD ECX,EBX                         ; 0044d522
    ADD EDX,EAX                         ; 0044d524
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044d526
    MOV dword ptr [ESP + 0x28],EDX      ; 0044d52d
    ADD EAX,EDI                         ; 0044d531
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044d533
    SHL EAX,0x8                         ; 0044d536
    SHL EDX,0x2                         ; 0044d539
    ADD EAX,0x14fba80                   ; 0044d53c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044d541
    ADD EAX,EDX                         ; 0044d545
    MOV CL,byte ptr [0x013405b0]        ; 0044d547 | DAT_013405b0
    MOV dword ptr [ESP + 0x24],EAX      ; 0044d54d
    MOV EDX,EDI                         ; 0044d551
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d553
    SHL EDX,CL                          ; 0044d556
    SHL EAX,CL                          ; 0044d558
    MOV EDX,dword ptr [EDX*0x4 + 0x1c60dac] ; 0044d55a
    SHL EAX,0x2                         ; 0044d561
    ADD ESI,0xa38388                    ; 0044d564
    ADD EDX,EAX                         ; 0044d56a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d56c
    MOV dword ptr [ESP + 0x20],EDX      ; 0044d56f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044d573
    ADD EBX,ESI                         ; 0044d576
    CMP EAX,EDX                         ; 0044d578
    JGE 0x0044d6dc                      ; 0044d57a
        ;   XREF to: 0044d6dc (CONDITIONAL_JUMP)  ; LAB_0044d6dc
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044d580
        ;   Label: LAB_0044d580
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044d584
    MOV ESI,dword ptr [EDX]             ; 0044d588
    CMP ESI,dword ptr [EAX]             ; 0044d58a
    JBE 0x0044d68e                      ; 0044d58c
        ;   XREF to: 0044d68e (CONDITIONAL_JUMP)  ; LAB_0044d68e
    FLD float ptr [EBX + 0x4]           ; 0044d592
    FMUL float ptr [0x0134059c]         ; 0044d595 | DAT_0134059c
    FLD float ptr [EBX]                 ; 0044d59b
    FMUL float ptr [0x01340590]         ; 0044d59d | DAT_01340590
    FADDP                               ; 0044d5a3
    FLD float ptr [EBX + 0x8]           ; 0044d5a5
    FMUL float ptr [0x013405a8]         ; 0044d5a8 | DAT_013405a8
    FADDP                               ; 0044d5ae
    FLDZ                                ; 0044d5b0
    FCOMPP                              ; 0044d5b2
    FNSTSW AX                           ; 0044d5b4
    SAHF                                ; 0044d5b6
    JA 0x0044d68e                       ; 0044d5b7
        ;   XREF to: 0044d68e (CONDITIONAL_JUMP)  ; LAB_0044d68e
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044d5bd
    PUSH EDI                            ; 0044d5c1
    MOV EAX,[0x01340584]                ; 0044d5c2 | DAT_01340584
    PUSH EAX                            ; 0044d5c7
    LEA ESI,[ESP + 0x14]                ; 0044d5c8
    LEA EDI,[ESP + 0x8]                 ; 0044d5cc
    CALL core_dcamera.cpp_FUN_0044a3e0  ; 0044d5d0
        ;   XREF to: 0044a3e0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044a3e0()
    LEA ESI,[ESP + 0x14]                ; 0044d5d5
    ADD ESP,0x8                         ; 0044d5d9
    MOVSD ES:EDI,ESI                    ; 0044d5dc
    MOVSD ES:EDI,ESI                    ; 0044d5dd
    MOVSD ES:EDI,ESI                    ; 0044d5de
    CMP dword ptr [ESP + 0x8],0x0       ; 0044d5df
    JLE 0x0044d68e                      ; 0044d5e4
        ;   XREF to: 0044d68e (CONDITIONAL_JUMP)  ; LAB_0044d68e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044d5ea
    MOV EAX,[0x01340584]                ; 0044d5ee | DAT_01340584
    SAR ESI,0x10                        ; 0044d5f3
    IMUL ESI,dword ptr [EAX + 0x1cc0]   ; 0044d5f6
    MOV EDX,dword ptr [ESP]             ; 0044d5fd
    SAR EDX,0x10                        ; 0044d600
    ADD EDX,ESI                         ; 0044d603
    MOV ESI,dword ptr [EAX + 0x2f94]    ; 0044d605
    MOV DX,word ptr [ESI + EDX*0x2]     ; 0044d60b
    MOV ESI,dword ptr [0x00b9e54c]      ; 0044d60f | DAT_00b9e54c
    AND EDX,0xffff                      ; 0044d615
    CMP EDX,ESI                         ; 0044d61b
    JGE 0x0044d68e                      ; 0044d61d
        ;   XREF to: 0044d68e (CONDITIONAL_JUMP)  ; LAB_0044d68e
    MOV EDI,dword ptr [ESP + 0x8]       ; 0044d61f
    LEA ESI,[EDX + 0x80]                ; 0044d623
    CMP ESI,EDI                         ; 0044d629
    JLE 0x0044d68e                      ; 0044d62b
        ;   XREF to: 0044d68e (CONDITIONAL_JUMP)  ; LAB_0044d68e
    MOV ESI,dword ptr [ESP]             ; 0044d62d
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 0044d630
    SAR ESI,CL                          ; 0044d636
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 0044d638
    AND ECX,ESI                         ; 0044d63e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044d640
    MOV dword ptr [ESP + 0x18],ECX      ; 0044d644
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 0044d648
    SAR ESI,CL                          ; 0044d64e
    AND ESI,dword ptr [EAX + 0x1c68]    ; 0044d650
    MOV CL,byte ptr [EAX + 0x1c60]      ; 0044d656
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044d65c
    SHL ESI,CL                          ; 0044d660
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 0044d662
    ADD ESI,EDI                         ; 0044d668
    MOVZX ESI,byte ptr [ESI + EAX*0x1]  ; 0044d66a
    MOV EAX,[0x00b9e54c]                ; 0044d66e | DAT_00b9e54c
    SUB EAX,EDX                         ; 0044d673
    MOV EDX,EAX                         ; 0044d675
    IMUL EDX,ESI                        ; 0044d677
    MOV CL,byte ptr [0x00b9e550]        ; 0044d67a | DAT_00b9e550
    SAR EDX,CL                          ; 0044d680
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044d682
    XOR EAX,EAX                         ; 0044d686
    MOV AL,byte ptr [ECX]               ; 0044d688
    ADD EAX,EDX                         ; 0044d68a
    MOV byte ptr [ECX],AL               ; 0044d68c
    MOV EAX,0x1                         ; 0044d68e
        ;   Label: LAB_0044d68e
    MOV ESI,dword ptr [ESP + 0x24]      ; 0044d693
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044d697
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044d69b
    MOV CL,byte ptr [0x013405b0]        ; 0044d69e | DAT_013405b0
    ADD EBX,0xc                         ; 0044d6a4
    ADD ESI,0x4                         ; 0044d6a7
    ADD EDI,0xc                         ; 0044d6aa
    INC EDX                             ; 0044d6ad
    SHL EAX,CL                          ; 0044d6ae
    MOV ECX,dword ptr [ESP + 0x20]      ; 0044d6b0
    SHL EAX,0x2                         ; 0044d6b4
    MOV dword ptr [ESP + 0x24],ESI      ; 0044d6b7
    MOV dword ptr [ESP + 0x1c],EDI      ; 0044d6bb
    MOV dword ptr [EBP + 0x18],EDX      ; 0044d6bf
    ADD ECX,EAX                         ; 0044d6c2
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044d6c4
    MOV dword ptr [ESP + 0x20],ECX      ; 0044d6c8
    INC EAX                             ; 0044d6cc
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0044d6cd
    MOV dword ptr [ESP + 0x28],EAX      ; 0044d6d0
    CMP EDX,ECX                         ; 0044d6d4
    JL 0x0044d580                       ; 0044d6d6
        ;   XREF to: 0044d580 (CONDITIONAL_JUMP)  ; LAB_0044d580
    MOV ESP,EBP                         ; 0044d6dc
        ;   Label: LAB_0044d6dc
    POP EBP                             ; 0044d6de
    POP EDI                             ; 0044d6df
    POP ESI                             ; 0044d6e0
    POP EBX                             ; 0044d6e1
    RET                                 ; 0044d6e2

