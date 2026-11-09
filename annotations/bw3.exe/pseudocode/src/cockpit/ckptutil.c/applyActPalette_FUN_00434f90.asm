; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_00434f90(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   bitmap_buffer
; int              Stack[0xc]:4   bitmap_size
; int              Stack[0x10]:4   palette_index
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_00437c50 at 00437dfb
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434f90
        ;   Label: cockpit_ckptutil.c_applyActPalette_FUN_00434f90
    SUB ESP,0x100                       ; 00434f91
    MOV EBX,dword ptr [ESP + 0x110]     ; 00434f97
    MOV EAX,ESP                         ; 00434f9e
    PUSH EAX                            ; 00434fa0
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00434fa1
    PUSH EDX                            ; 00434fa8
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010 ; 00434fa9
        ;   XREF to: 00435010 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 00434fae
    MOV ECX,dword ptr [ESP + 0x114]     ; 00434fb1
    TEST ECX,ECX                        ; 00434fb8
    JL 0x00434fc4                       ; 00434fba
        ;   XREF to: 00434fc4 (CONDITIONAL_JUMP)  ; LAB_00434fc4
    CMP ECX,0x100                       ; 00434fbc
    JL 0x00434ff8                       ; 00434fc2
        ;   XREF to: 00434ff8 (CONDITIONAL_JUMP)  ; LAB_00434ff8
    XOR EDX,EDX                         ; 00434fc4
        ;   Label: LAB_00434fc4
    TEST EBX,EBX                        ; 00434fc6
    JBE 0x00434ff0                      ; 00434fc8
        ;   XREF to: 00434ff0 (CONDITIONAL_JUMP)  ; LAB_00434ff0
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00434fca
    XOR ECX,ECX                         ; 00434fd1
        ;   Label: LAB_00434fd1
    MOV CL,byte ptr [EAX]               ; 00434fd3
    INC EAX                             ; 00434fd5
    MOV CL,byte ptr [ESP + ECX*0x1]     ; 00434fd6
    INC EDX                             ; 00434fd9
    MOV byte ptr [EAX + -0x1],CL        ; 00434fda
    CMP EDX,EBX                         ; 00434fdd
    JC 0x00434fd1                       ; 00434fdf
        ;   XREF to: 00434fd1 (CONDITIONAL_JUMP)  ; LAB_00434fd1
    LEA EAX,[EAX]                       ; 00434fe1
    LEA EDX,[EDX]                       ; 00434fe7
    LEA EAX,[EAX]                       ; 00434fed
    ADD ESP,0x100                       ; 00434ff0
        ;   Label: LAB_00434ff0
    POP EBX                             ; 00434ff6
    RET                                 ; 00434ff7
    MOV DL,byte ptr [ESP + 0x114]       ; 00434ff8
        ;   Label: LAB_00434ff8
    MOV byte ptr [ESP + ECX*0x1],DL     ; 00434fff
    JMP 0x00434fc4                      ; 00435002
        ;   XREF to: 00434fc4 (UNCONDITIONAL_JUMP)  ; LAB_00434fc4

