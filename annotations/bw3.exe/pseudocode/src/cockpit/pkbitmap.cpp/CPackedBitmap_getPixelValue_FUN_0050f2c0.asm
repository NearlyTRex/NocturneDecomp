; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0050f2c0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_coordinate
; int              Stack[0xc]:4   row_index
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f2c0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0050f2c0
    PUSH ESI                            ; 0050f2c1
    PUSH EDI                            ; 0050f2c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0050f2c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f2c7
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050f2cb
    TEST EDX,EDX                        ; 0050f2cf
    JL 0x0050f315                       ; 0050f2d1
        ;   XREF to: 0050f315 (CONDITIONAL_JUMP)  ; LAB_0050f315
    CMP EDX,dword ptr [EDI + 0x1c]      ; 0050f2d3
    JGE 0x0050f315                      ; 0050f2d6
        ;   XREF to: 0050f315 (CONDITIONAL_JUMP)  ; LAB_0050f315
    SHL EDX,0x2                         ; 0050f2d8
    MOV EAX,dword ptr [EDI + 0x20]      ; 0050f2db
    ADD EDX,EAX                         ; 0050f2de
    MOV EDI,dword ptr [EDI + 0x14]      ; 0050f2e0
    MOV EAX,dword ptr [EDX]             ; 0050f2e3
    MOV ESI,dword ptr [EDX + 0x4]       ; 0050f2e5
    ADD EAX,EDI                         ; 0050f2e8
    ADD EDI,ESI                         ; 0050f2ea
    CMP EAX,EDI                         ; 0050f2ec
    JNC 0x0050f315                      ; 0050f2ee
        ;   XREF to: 0050f315 (CONDITIONAL_JUMP)  ; LAB_0050f315
    XOR EDX,EDX                         ; 0050f2f0
        ;   Label: LAB_0050f2f0
    MOV DX,word ptr [EAX]               ; 0050f2f2
    CMP EDX,EBX                         ; 0050f2f5
    JG 0x0050f315                       ; 0050f2f7
        ;   XREF to: 0050f315 (CONDITIONAL_JUMP)  ; LAB_0050f315
    XOR ECX,ECX                         ; 0050f2f9
    MOV CX,word ptr [EAX + 0x2]         ; 0050f2fb
    LEA ESI,[EDX + ECX*0x1]             ; 0050f2ff
    ADD EAX,0x4                         ; 0050f302
    CMP EBX,ESI                         ; 0050f305
    JL 0x0050f31e                       ; 0050f307
        ;   XREF to: 0050f31e (CONDITIONAL_JUMP)  ; LAB_0050f31e
    LEA EDX,[ECX + 0x3]                 ; 0050f309
    AND DL,0xfc                         ; 0050f30c
    ADD EAX,EDX                         ; 0050f30f
    CMP EAX,EDI                         ; 0050f311
    JC 0x0050f2f0                       ; 0050f313
        ;   XREF to: 0050f2f0 (CONDITIONAL_JUMP)  ; LAB_0050f2f0
    MOV EAX,0xffffffff                  ; 0050f315
        ;   Label: LAB_0050f315
    POP EDI                             ; 0050f31a
    POP ESI                             ; 0050f31b
    POP EBX                             ; 0050f31c
    RET                                 ; 0050f31d
    SUB EBX,EDX                         ; 0050f31e
        ;   Label: LAB_0050f31e
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 0050f320
    AND EAX,0xff                        ; 0050f323
    POP EDI                             ; 0050f328
    POP ESI                             ; 0050f329
    POP EBX                             ; 0050f32a
    RET                                 ; 0050f32b

