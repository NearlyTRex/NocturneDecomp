; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_0042d370(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   bitmap_buffer
; int              Stack[0xc]:4   bitmap_size
; int              Stack[0x10]:4   palette_index
;
; XREF[3]:
;   cockpit_ckptutil.c_FUN_0042d180 at 0042d1b0
;   cockpit_ckptutil.c_FUN_00430210 at 004303bb
;   cockpit_ckptutil.c_applyColorPalette_FUN_0042d200 at 0042d232
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d370
        ;   Label: cockpit_ckptutil.c_applyActPalette_FUN_0042d370
    SUB ESP,0x100                       ; 0042d371
    MOV EBX,dword ptr [ESP + 0x110]     ; 0042d377
    MOV EAX,ESP                         ; 0042d37e
    PUSH EAX                            ; 0042d380
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0042d381
    PUSH EDX                            ; 0042d388
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0 ; 0042d389
        ;   XREF to: 0042d3f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 0042d38e
    MOV ECX,dword ptr [ESP + 0x114]     ; 0042d391
    TEST ECX,ECX                        ; 0042d398
    JL 0x0042d3a4                       ; 0042d39a
        ;   XREF to: 0042d3a4 (CONDITIONAL_JUMP)  ; LAB_0042d3a4
    CMP ECX,0x100                       ; 0042d39c
    JL 0x0042d3d8                       ; 0042d3a2
        ;   XREF to: 0042d3d8 (CONDITIONAL_JUMP)  ; LAB_0042d3d8
    XOR EDX,EDX                         ; 0042d3a4
        ;   Label: LAB_0042d3a4
    TEST EBX,EBX                        ; 0042d3a6
    JBE 0x0042d3d0                      ; 0042d3a8
        ;   XREF to: 0042d3d0 (CONDITIONAL_JUMP)  ; LAB_0042d3d0
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0042d3aa
    XOR ECX,ECX                         ; 0042d3b1
        ;   Label: LAB_0042d3b1
    MOV CL,byte ptr [EAX]               ; 0042d3b3
    INC EAX                             ; 0042d3b5
    MOV CL,byte ptr [ESP + ECX*0x1]     ; 0042d3b6
    INC EDX                             ; 0042d3b9
    MOV byte ptr [EAX + -0x1],CL        ; 0042d3ba
    CMP EDX,EBX                         ; 0042d3bd
    JC 0x0042d3b1                       ; 0042d3bf
        ;   XREF to: 0042d3b1 (CONDITIONAL_JUMP)  ; LAB_0042d3b1
    LEA EAX,[EAX]                       ; 0042d3c1
    LEA EDX,[EDX]                       ; 0042d3c7
    LEA EAX,[EAX]                       ; 0042d3cd
    ADD ESP,0x100                       ; 0042d3d0
        ;   Label: LAB_0042d3d0
    POP EBX                             ; 0042d3d6
    RET                                 ; 0042d3d7
    MOV DL,byte ptr [ESP + 0x114]       ; 0042d3d8
        ;   Label: LAB_0042d3d8
    MOV byte ptr [ESP + ECX*0x1],DL     ; 0042d3df
    JMP 0x0042d3a4                      ; 0042d3e2
        ;   XREF to: 0042d3a4 (UNCONDITIONAL_JUMP)  ; LAB_0042d3a4

