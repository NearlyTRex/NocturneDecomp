; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_004515b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00453ed0 at 00453f3b
;
; Called Functions:
;   FUN_00488732
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004515b0
        ;   Label: FUN_004515b0
    PUSH ESI                            ; 004515b1
    PUSH EDI                            ; 004515b2
    PUSH EBP                            ; 004515b3
    SUB ESP,0x4                         ; 004515b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004515b7
    MOV EAX,0xb23458                    ; 004515bb
    MOV EBP,0xb10718                    ; 004515c0
    MOV EDI,0x1                         ; 004515c5
    ADD EAX,0x140                       ; 004515ca
        ;   Label: LAB_004515ca
    ADD EBP,0x140                       ; 004515cf
    MOV dword ptr [ESP],EAX             ; 004515d5
    MOV EAX,dword ptr [ESI + 0x154]     ; 004515d8
    DEC EAX                             ; 004515de
    CMP EDI,EAX                         ; 004515df
    JL 0x00451668                       ; 004515e1
        ;   XREF to: 00451668 (CONDITIONAL_JUMP)  ; LAB_00451668
    MOV ECX,dword ptr [ESI + 0x154]     ; 004515e7
    XOR EDX,EDX                         ; 004515ed
    TEST ECX,ECX                        ; 004515ef
    JLE 0x00451620                      ; 004515f1
        ;   XREF to: 00451620 (CONDITIONAL_JUMP)  ; LAB_00451620
    XOR EAX,EAX                         ; 004515f3
    XOR BL,BL                           ; 004515f5
        ;   Label: LAB_004515f5
    MOV byte ptr [EAX + 0xb23458],BL    ; 004515f7
    MOV EDI,dword ptr [ESI + 0x150]     ; 004515fd
    MOV byte ptr [EDI + EAX*0x1 + 0xb23457],BL ; 00451603
    INC EDX                             ; 0045160a
    MOV ECX,dword ptr [ESI + 0x154]     ; 0045160b
    ADD EAX,0x140                       ; 00451611
    CMP EDX,ECX                         ; 00451616
    JL 0x004515f5                       ; 00451618
        ;   XREF to: 004515f5 (CONDITIONAL_JUMP)  ; LAB_004515f5
    LEA EAX,[EAX]                       ; 0045161a
    MOV EBX,dword ptr [ESI + 0x150]     ; 00451620
        ;   Label: LAB_00451620
    XOR EAX,EAX                         ; 00451626
    TEST EBX,EBX                        ; 00451628
    JLE 0x00451660                      ; 0045162a
        ;   XREF to: 00451660 (CONDITIONAL_JUMP)  ; LAB_00451660
    XOR CL,CL                           ; 0045162c
        ;   Label: LAB_0045162c
    MOV byte ptr [EAX + 0xb23458],CL    ; 0045162e
    MOV EDX,dword ptr [ESI + 0x154]     ; 00451634
    DEC EDX                             ; 0045163a
    IMUL EDX,EDX,0x140                  ; 0045163b
    MOV byte ptr [EDX + EAX*0x1 + 0xb23458],CL ; 00451641
    INC EAX                             ; 00451648
    CMP EAX,dword ptr [ESI + 0x150]     ; 00451649
    JL 0x0045162c                       ; 0045164f
        ;   XREF to: 0045162c (CONDITIONAL_JUMP)  ; LAB_0045162c
    LEA EAX,[EAX]                       ; 00451651
    LEA EDX,[EDX]                       ; 00451657
    LEA EAX,[EAX]                       ; 0045165d
    ADD ESP,0x4                         ; 00451660
        ;   Label: LAB_00451660
    POP EBP                             ; 00451663
    POP EDI                             ; 00451664
    POP ESI                             ; 00451665
    POP EBX                             ; 00451666
    RET                                 ; 00451667
    MOV EAX,dword ptr [ESI + 0x150]     ; 00451668
        ;   Label: LAB_00451668
    PUSH EAX                            ; 0045166e
    PUSH EBP                            ; 0045166f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00451670
    PUSH EBX                            ; 00451674
    CALL FUN_00488732                   ; 00451675
        ;   XREF to: 00488732 (UNCONDITIONAL_CALL)  ; undefined FUN_00488732()
    ADD ESP,0xc                         ; 0045167a
    MOV EAX,dword ptr [ESP]             ; 0045167d
    INC EDI                             ; 00451680
    JMP 0x004515ca                      ; 00451681
        ;   XREF to: 004515ca (UNCONDITIONAL_JUMP)  ; LAB_004515ca

