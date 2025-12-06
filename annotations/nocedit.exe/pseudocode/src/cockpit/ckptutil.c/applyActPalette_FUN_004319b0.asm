; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   bitmap_buffer
; int              Stack[0xc]:4   bitmap_size
; int              Stack[0x10]:4   palette_index
;
; XREF[3]:
;   cockpit_ckptutil.c_applyColorPalette_FUN_004319b0 at 00431862
;   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 at 004317e0
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 00434859
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004319b0
        ;   Label: cockpit_ckptutil.c_applyActPalette_FUN_004319b0
    SUB ESP,0x100                       ; 004319b1
    MOV EBX,dword ptr [ESP + 0x110]     ; 004319b7
    MOV EAX,ESP                         ; 004319be
    PUSH EAX                            ; 004319c0
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004319c1
    PUSH EDX                            ; 004319c8
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30 ; 004319c9 | void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette)
        ;   XREF to: 00431a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004319ce
    MOV ECX,dword ptr [ESP + 0x114]     ; 004319d1
    TEST ECX,ECX                        ; 004319d8
    JL 0x004319e4                       ; 004319da | LAB_004319e4
        ;   XREF to: 004319e4 (CONDITIONAL_JUMP)
    CMP ECX,0x100                       ; 004319dc
    JL 0x00431a18                       ; 004319e2 | LAB_00431a18
        ;   XREF to: 00431a18 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004319e4
        ;   Label: LAB_004319e4
    TEST EBX,EBX                        ; 004319e6
    JBE 0x00431a10                      ; 004319e8 | LAB_00431a10
        ;   XREF to: 00431a10 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004319ea
    XOR ECX,ECX                         ; 004319f1
        ;   Label: LAB_004319f1
    MOV CL,byte ptr [EAX]               ; 004319f3
    INC EAX                             ; 004319f5
    MOV CL,byte ptr [ESP + ECX*0x1]     ; 004319f6
    INC EDX                             ; 004319f9
    MOV byte ptr [EAX + -0x1],CL        ; 004319fa
    CMP EDX,EBX                         ; 004319fd
    JC 0x004319f1                       ; 004319ff | LAB_004319f1
        ;   XREF to: 004319f1 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00431a01
    LEA EDX,[EDX]                       ; 00431a07
    LEA EAX,[EAX]                       ; 00431a0d
    ADD ESP,0x100                       ; 00431a10
        ;   Label: LAB_00431a10
    POP EBX                             ; 00431a16
    RET                                 ; 00431a17
    MOV DL,byte ptr [ESP + 0x114]       ; 00431a18
        ;   Label: LAB_00431a18
    MOV byte ptr [ESP + ECX*0x1],DL     ; 00431a1f
    JMP 0x004319e4                      ; 00431a22 | LAB_004319e4
        ;   XREF to: 004319e4 (UNCONDITIONAL_JUMP)

