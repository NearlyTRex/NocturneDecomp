; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00436750(uchar *bitmap_data,int width,int height,int bytes_per_pixel)
;
; Parameters:
; uchar *          Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bytes_per_pixel
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436750
        ;   Label: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00436750
    PUSH ESI                            ; 00436751
    PUSH EDI                            ; 00436752
    PUSH EBP                            ; 00436753
    SUB ESP,0x10                        ; 00436754
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00436757
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043675b
    MOV EDX,dword ptr [ESP + 0x30]      ; 0043675f
    IMUL EAX,EDX                        ; 00436763
    MOV dword ptr [ESP + 0xc],EAX       ; 00436766
    MOV EDX,ECX                         ; 0043676a
    MOV EAX,ECX                         ; 0043676c
    SAR EDX,0x1f                        ; 0043676e
    SUB EAX,EDX                         ; 00436771
    SAR EAX,0x1                         ; 00436773
    XOR EBP,EBP                         ; 00436775
    MOV dword ptr [ESP + 0x4],EAX       ; 00436777
    TEST EAX,EAX                        ; 0043677b
    JBE 0x004367d8                      ; 0043677d
        ;   XREF to: 004367d8 (CONDITIONAL_JUMP)  ; LAB_004367d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043677f
    MOV EDX,EAX                         ; 00436783
    MOV dword ptr [ESP + 0x8],EAX       ; 00436785
    MOV EBX,EAX                         ; 00436789
    IMUL ESI,EAX,0x0                    ; 0043678b
    IMUL ECX,EDX                        ; 0043678e
    NEG EBX                             ; 00436791
    MOV EAX,dword ptr [ESP + 0x24]      ; 00436793
    MOV dword ptr [ESP + 0x8],EBX       ; 00436797
    ADD ESI,EAX                         ; 0043679b
    MOV EAX,EDX                         ; 0043679d
    ADD ECX,ESI                         ; 0043679f
    MOV dword ptr [ESP],EAX             ; 004367a1
    LEA EDI,[EBX + ECX*0x1]             ; 004367a4
    MOV ECX,dword ptr [ESP + 0xc]       ; 004367a7
        ;   Label: LAB_004367a7
    TEST ECX,ECX                        ; 004367ab
    JBE 0x004367c4                      ; 004367ad
        ;   XREF to: 004367c4 (CONDITIONAL_JUMP)  ; LAB_004367c4
    MOV EAX,ESI                         ; 004367af
    MOV EDX,EDI                         ; 004367b1
    ADD ECX,ESI                         ; 004367b3
    MOV BH,byte ptr [EAX]               ; 004367b5
        ;   Label: LAB_004367b5
    MOV BL,byte ptr [EDX]               ; 004367b7
    INC EDX                             ; 004367b9
    MOV byte ptr [EAX],BL               ; 004367ba
    INC EAX                             ; 004367bc
    MOV byte ptr [EDX + -0x1],BH        ; 004367bd
    CMP EAX,ECX                         ; 004367c0
    JC 0x004367b5                       ; 004367c2
        ;   XREF to: 004367b5 (CONDITIONAL_JUMP)  ; LAB_004367b5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004367c4
        ;   Label: LAB_004367c4
    MOV EDX,dword ptr [ESP]             ; 004367c8
    MOV ECX,dword ptr [ESP + 0x4]       ; 004367cb
    INC EBP                             ; 004367cf
    ADD EDI,EAX                         ; 004367d0
    ADD ESI,EDX                         ; 004367d2
    CMP EBP,ECX                         ; 004367d4
    JC 0x004367a7                       ; 004367d6
        ;   XREF to: 004367a7 (CONDITIONAL_JUMP)  ; LAB_004367a7
    ADD ESP,0x10                        ; 004367d8
        ;   Label: LAB_004367d8
    POP EBP                             ; 004367db
    POP EDI                             ; 004367dc
    POP ESI                             ; 004367dd
    POP EBX                             ; 004367de
    RET                                 ; 004367df

