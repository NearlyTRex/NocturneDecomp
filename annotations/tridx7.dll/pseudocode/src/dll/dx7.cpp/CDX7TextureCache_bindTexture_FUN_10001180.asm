; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __ecxcall dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(CDX7TextureCache *this_ptr,SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; XREF[1]:
;   dll_dx7.cpp_bindTextureBySize_FUN_100015d0 at 100015fb
;
; Called Functions:
;   dll_dx7.cpp_CDX7TextureCache_acquireSlot_FUN_10001090
;   dll_dx7.cpp_loadTexture_FUN_100030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10001180
        ;   Label: dll_dx7.cpp_CDX7TextureCache_bindTexture_FUN_10001180
    XOR EAX,EAX                         ; 10001181
    PUSH ESI                            ; 10001183
    CMP dword ptr [ECX + 0x8],EAX       ; 10001184
    PUSH EDI                            ; 10001187
    PUSH EBP                            ; 10001188
    JLE 0x100011ce                      ; 10001189
        ;   XREF to: 100011ce (CONDITIONAL_JUMP)  ; LAB_100011ce
    LEA EDX,[ECX + 0x14]                ; 1000118b
    MOV EBP,dword ptr [ESP + 0x14]      ; 1000118e
    ADD EBP,0x8                         ; 10001192
    MOV ESI,EDX                         ; 10001195
        ;   Label: LAB_10001195
    MOV EDI,EBP                         ; 10001197
    MOV BL,byte ptr [ESI]               ; 10001199
        ;   Label: LAB_10001199
    CMP BL,byte ptr [EDI]               ; 1000119b
    JNZ 0x100011b9                      ; 1000119d
        ;   XREF to: 100011b9 (CONDITIONAL_JUMP)  ; LAB_100011b9
    OR BL,BL                            ; 1000119f
    JZ 0x100011b5                       ; 100011a1
        ;   XREF to: 100011b5 (CONDITIONAL_JUMP)  ; LAB_100011b5
    MOV BL,byte ptr [ESI + 0x1]         ; 100011a3
    CMP BL,byte ptr [EDI + 0x1]         ; 100011a6
    JNZ 0x100011b9                      ; 100011a9
        ;   XREF to: 100011b9 (CONDITIONAL_JUMP)  ; LAB_100011b9
    ADD ESI,0x2                         ; 100011ab
    ADD EDI,0x2                         ; 100011ae
    OR BL,BL                            ; 100011b1
    JNZ 0x10001199                      ; 100011b3
        ;   XREF to: 10001199 (CONDITIONAL_JUMP)  ; LAB_10001199
    XOR ESI,ESI                         ; 100011b5
        ;   Label: LAB_100011b5
    JMP 0x100011be                      ; 100011b7
        ;   XREF to: 100011be (UNCONDITIONAL_JUMP)  ; LAB_100011be
    SBB ESI,ESI                         ; 100011b9
        ;   Label: LAB_100011b9
    SBB ESI,-0x1                        ; 100011bb
    TEST ESI,ESI                        ; 100011be
        ;   Label: LAB_100011be
    JZ 0x100011cb                       ; 100011c0
        ;   XREF to: 100011cb (CONDITIONAL_JUMP)  ; LAB_100011cb
    ADD EDX,0x48                        ; 100011c2
    INC EAX                             ; 100011c5
    CMP dword ptr [ECX + 0x8],EAX       ; 100011c6
    JG 0x10001195                       ; 100011c9
        ;   XREF to: 10001195 (CONDITIONAL_JUMP)  ; LAB_10001195
    CMP dword ptr [ECX + 0x8],EAX       ; 100011cb
        ;   Label: LAB_100011cb
    JNZ 0x100011e1                      ; 100011ce
        ;   XREF to: 100011e1 (CONDITIONAL_JUMP)  ; LAB_100011e1
        ;   Label: LAB_100011ce
    MOV ESI,dword ptr [ESP + 0x14]      ; 100011d0
    PUSH ESI                            ; 100011d4
    CALL dll_dx7.cpp_CDX7TextureCache_acquireSlot_FUN_10001090 ; 100011d5
        ;   XREF to: 10001090 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_CDX7TextureCache_acquireSlot_FUN_10001090(CDX7TextureCache * this_ptr, SMRGLTextureBasic * texture_info)
    POP EBP                             ; 100011da
    POP EDI                             ; 100011db
    POP ESI                             ; 100011dc
    POP EBX                             ; 100011dd
    RET 0x4                             ; 100011de
    SHL EAX,0x3                         ; 100011e1
        ;   Label: LAB_100011e1
    LEA EDX,[EAX + EAX*0x8]             ; 100011e4
    MOV ECX,dword ptr [EDX + ECX*0x1 + 0x10] ; 100011e7
    PUSH ECX                            ; 100011eb
    CALL dll_dx7.cpp_loadTexture_FUN_100030e0 ; 100011ec
        ;   XREF to: 100030e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_loadTexture_FUN_100030e0(int texture_index)
    ADD ESP,0x4                         ; 100011f1
    POP EBP                             ; 100011f4
    POP EDI                             ; 100011f5
    POP ESI                             ; 100011f6
    POP EBX                             ; 100011f7
    RET 0x4                             ; 100011f8

