; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00433160(uchar *bitmap_data,int width,int height,int bytes_per_pixel)
;
; Parameters:
; uchar *          Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bytes_per_pixel
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433160
        ;   Label: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160
    PUSH ESI                            ; 00433161
    PUSH EDI                            ; 00433162
    PUSH EBP                            ; 00433163
    SUB ESP,0x10                        ; 00433164
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00433167
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043316b
    MOV EDX,dword ptr [ESP + 0x30]      ; 0043316f
    IMUL EAX,EDX                        ; 00433173
    MOV dword ptr [ESP + 0xc],EAX       ; 00433176
    MOV EDX,ECX                         ; 0043317a
    MOV EAX,ECX                         ; 0043317c
    SAR EDX,0x1f                        ; 0043317e
    SUB EAX,EDX                         ; 00433181
    SAR EAX,0x1                         ; 00433183
    XOR EBP,EBP                         ; 00433185
    MOV dword ptr [ESP + 0x4],EAX       ; 00433187
    TEST EAX,EAX                        ; 0043318b
    JBE 0x004331e8                      ; 0043318d
        ;   XREF to: 004331e8 (CONDITIONAL_JUMP)  ; LAB_004331e8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043318f
    MOV EDX,EAX                         ; 00433193
    MOV dword ptr [ESP + 0x8],EAX       ; 00433195
    MOV EBX,EAX                         ; 00433199
    IMUL ESI,EAX,0x0                    ; 0043319b
    IMUL ECX,EDX                        ; 0043319e
    NEG EBX                             ; 004331a1
    MOV EAX,dword ptr [ESP + 0x24]      ; 004331a3
    MOV dword ptr [ESP + 0x8],EBX       ; 004331a7
    ADD ESI,EAX                         ; 004331ab
    MOV EAX,EDX                         ; 004331ad
    ADD ECX,ESI                         ; 004331af
    MOV dword ptr [ESP],EAX             ; 004331b1
    LEA EDI,[EBX + ECX*0x1]             ; 004331b4
    MOV ECX,dword ptr [ESP + 0xc]       ; 004331b7
        ;   Label: LAB_004331b7
    TEST ECX,ECX                        ; 004331bb
    JBE 0x004331d4                      ; 004331bd
        ;   XREF to: 004331d4 (CONDITIONAL_JUMP)  ; LAB_004331d4
    MOV EAX,ESI                         ; 004331bf
    MOV EDX,EDI                         ; 004331c1
    ADD ECX,ESI                         ; 004331c3
    MOV BH,byte ptr [EAX]               ; 004331c5
        ;   Label: LAB_004331c5
    MOV BL,byte ptr [EDX]               ; 004331c7
    INC EDX                             ; 004331c9
    MOV byte ptr [EAX],BL               ; 004331ca
    INC EAX                             ; 004331cc
    MOV byte ptr [EDX + -0x1],BH        ; 004331cd
    CMP EAX,ECX                         ; 004331d0
    JC 0x004331c5                       ; 004331d2
        ;   XREF to: 004331c5 (CONDITIONAL_JUMP)  ; LAB_004331c5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004331d4
        ;   Label: LAB_004331d4
    MOV EDX,dword ptr [ESP]             ; 004331d8
    MOV ECX,dword ptr [ESP + 0x4]       ; 004331db
    INC EBP                             ; 004331df
    ADD EDI,EAX                         ; 004331e0
    ADD ESI,EDX                         ; 004331e2
    CMP EBP,ECX                         ; 004331e4
    JC 0x004331b7                       ; 004331e6
        ;   XREF to: 004331b7 (CONDITIONAL_JUMP)  ; LAB_004331b7
    ADD ESP,0x10                        ; 004331e8
        ;   Label: LAB_004331e8
    POP EBP                             ; 004331eb
    POP EDI                             ; 004331ec
    POP ESI                             ; 004331ed
    POP EBX                             ; 004331ee
    RET                                 ; 004331ef

