; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_0042c670(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   bitmap_buffer
; int              Stack[0xc]:4   bitmap_size
; int              Stack[0x10]:4   palette_index
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f4db
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c670
        ;   Label: cockpit_ckptutil.c_applyActPalette_FUN_0042c670
    SUB ESP,0x100                       ; 0042c671
    MOV EBX,dword ptr [ESP + 0x110]     ; 0042c677
    MOV EAX,ESP                         ; 0042c67e
    PUSH EAX                            ; 0042c680
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0042c681
    PUSH EDX                            ; 0042c688
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0 ; 0042c689
        ;   XREF to: 0042c6f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 0042c68e
    MOV ECX,dword ptr [ESP + 0x114]     ; 0042c691
    TEST ECX,ECX                        ; 0042c698
    JL 0x0042c6a4                       ; 0042c69a
        ;   XREF to: 0042c6a4 (CONDITIONAL_JUMP)  ; LAB_0042c6a4
    CMP ECX,0x100                       ; 0042c69c
    JL 0x0042c6d8                       ; 0042c6a2
        ;   XREF to: 0042c6d8 (CONDITIONAL_JUMP)  ; LAB_0042c6d8
    XOR EDX,EDX                         ; 0042c6a4
        ;   Label: LAB_0042c6a4
    TEST EBX,EBX                        ; 0042c6a6
    JBE 0x0042c6d0                      ; 0042c6a8
        ;   XREF to: 0042c6d0 (CONDITIONAL_JUMP)  ; LAB_0042c6d0
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0042c6aa
    XOR ECX,ECX                         ; 0042c6b1
        ;   Label: LAB_0042c6b1
    MOV CL,byte ptr [EAX]               ; 0042c6b3
    INC EAX                             ; 0042c6b5
    MOV CL,byte ptr [ESP + ECX*0x1]     ; 0042c6b6
    INC EDX                             ; 0042c6b9
    MOV byte ptr [EAX + -0x1],CL        ; 0042c6ba
    CMP EDX,EBX                         ; 0042c6bd
    JC 0x0042c6b1                       ; 0042c6bf
        ;   XREF to: 0042c6b1 (CONDITIONAL_JUMP)  ; LAB_0042c6b1
    LEA EAX,[EAX]                       ; 0042c6c1
    LEA EDX,[EDX]                       ; 0042c6c7
    LEA EAX,[EAX]                       ; 0042c6cd
    ADD ESP,0x100                       ; 0042c6d0
        ;   Label: LAB_0042c6d0
    POP EBX                             ; 0042c6d6
    RET                                 ; 0042c6d7
    MOV DL,byte ptr [ESP + 0x114]       ; 0042c6d8
        ;   Label: LAB_0042c6d8
    MOV byte ptr [ESP + ECX*0x1],DL     ; 0042c6df
    JMP 0x0042c6a4                      ; 0042c6e2
        ;   XREF to: 0042c6a4 (UNCONDITIONAL_JUMP)  ; LAB_0042c6a4

