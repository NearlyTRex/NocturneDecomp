; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_setVertexStateFlags_FUN_005cd220(CPoly * this_ptr, uint set_mask, uint clear_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   set_mask
; uint             Stack[0xc]:4   clear_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd220
        ;   Label: shape_superopt.cpp_CPoly_setVertexStateFlags_FUN_005cd220
    PUSH ESI                            ; 005cd221
    PUSH EDI                            ; 005cd222
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cd223
    MOV ESI,dword ptr [ESP + 0x14]      ; 005cd227
    MOV EDI,dword ptr [ESP + 0x18]      ; 005cd22b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005cd22f
    SHL EDX,0x3                         ; 005cd232
    MOV ECX,dword ptr [EAX]             ; 005cd235
    MOV EBX,EDX                         ; 005cd237
    SHL EDX,0x3                         ; 005cd239
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cd23c
    SUB EDX,EBX                         ; 005cd23f
    AND dword ptr [ECX + EDX*0x1 + 0x34],EDI ; 005cd241
    MOV EDX,dword ptr [EAX + 0x4]       ; 005cd245
    SHL EDX,0x3                         ; 005cd248
    MOV EBX,EDX                         ; 005cd24b
    SHL EDX,0x3                         ; 005cd24d
    SUB EDX,EBX                         ; 005cd250
    OR dword ptr [ECX + EDX*0x1 + 0x34],ESI ; 005cd252
    MOV EDX,dword ptr [EAX + 0x8]       ; 005cd256
    SHL EDX,0x3                         ; 005cd259
    MOV EBX,EDX                         ; 005cd25c
    SHL EDX,0x3                         ; 005cd25e
    SUB EDX,EBX                         ; 005cd261
    AND dword ptr [ECX + EDX*0x1 + 0x34],EDI ; 005cd263
    MOV EDX,dword ptr [EAX + 0x8]       ; 005cd267
    SHL EDX,0x3                         ; 005cd26a
    MOV EBX,EDX                         ; 005cd26d
    SHL EDX,0x3                         ; 005cd26f
    SUB EDX,EBX                         ; 005cd272
    OR dword ptr [ECX + EDX*0x1 + 0x34],ESI ; 005cd274
    MOV EDX,dword ptr [EAX + 0xc]       ; 005cd278
    SHL EDX,0x3                         ; 005cd27b
    MOV EBX,EDX                         ; 005cd27e
    SHL EDX,0x3                         ; 005cd280
    SUB EDX,EBX                         ; 005cd283
    AND dword ptr [ECX + EDX*0x1 + 0x34],EDI ; 005cd285
    MOV EDX,dword ptr [EAX + 0xc]       ; 005cd289
    SHL EDX,0x3                         ; 005cd28c
    MOV EBX,EDX                         ; 005cd28f
    SHL EDX,0x3                         ; 005cd291
    SUB EDX,EBX                         ; 005cd294
    OR dword ptr [ECX + EDX*0x1 + 0x34],ESI ; 005cd296
    MOV EDX,dword ptr [EAX + 0x60]      ; 005cd29a
    AND EDX,EDI                         ; 005cd29d
    MOV ECX,EDX                         ; 005cd29f
    MOV dword ptr [EAX + 0x60],EDX      ; 005cd2a1
    OR ECX,ESI                          ; 005cd2a4
    MOV dword ptr [EAX + 0x60],ECX      ; 005cd2a6
    POP EDI                             ; 005cd2a9
    POP ESI                             ; 005cd2aa
    POP EBX                             ; 005cd2ab
    RET                                 ; 005cd2ac

