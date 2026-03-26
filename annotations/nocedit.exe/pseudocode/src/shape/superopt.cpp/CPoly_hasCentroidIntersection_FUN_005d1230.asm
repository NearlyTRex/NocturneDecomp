; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other
; Local Variables:
; CVector3d        Stack[-0x74]:24  local_74
; CVector3d        Stack[-0x5c]:24  CStack_5c
; CVector2d        Stack[-0x44]:16  local_44
; CVector2d        Stack[-0x2c]:16  CStack_2c
; CPoly_vtable *   Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d1230
        ;   Label: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
    PUSH ESI                            ; 005d1231
    PUSH EDI                            ; 005d1232
    PUSH EBP                            ; 005d1233
    SUB ESP,0x64                        ; 005d1234
    MOV EBX,dword ptr [ESP + 0x78]      ; 005d1237
    MOV EBP,dword ptr [ESP + 0x7c]      ; 005d123b
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d123f
    PUSH EBP                            ; 005d1242
    MOV dword ptr [ESP + 0x64],EAX      ; 005d1243
    MOV EAX,dword ptr [EBP + 0x64]      ; 005d1247
    LEA ESI,[ESP + 0x4]                 ; 005d124a
    LEA EDI,[ESP + 0x34]                ; 005d124e
    CALL dword ptr [EAX + 0x6c]         ; 005d1252
        ;   Label: prt_5d1252_11b7af31
    ADD ESP,0x4                         ; 005d1255
    LEA EAX,[ESP + 0x30]                ; 005d1258
    JMP 0x03fc4976                      ; 005d125c
        ;   XREF to: 03fc4976 (UNCONDITIONAL_JUMP)  ; LAB_03fc4976
    CALL dword ptr [EAX + 0x64]         ; 005d126d
        ;   Label: LAB_005d126d
    ADD ESP,0x8                         ; 005d1270
    TEST EAX,EAX                        ; 005d1273
    JZ 0x005d1284                       ; 005d1275
        ;   XREF to: 005d1284 (CONDITIONAL_JUMP)  ; LAB_005d1284
    MOV EAX,0x1                         ; 005d1277
        ;   Label: LAB_005d1277
    ADD ESP,0x64                        ; 005d127c
    POP EBP                             ; 005d127f
    POP EDI                             ; 005d1280
    POP ESI                             ; 005d1281
    POP EBX                             ; 005d1282
    RET                                 ; 005d1283
    MOV EAX,dword ptr [EBP + 0x64]      ; 005d1284
        ;   Label: LAB_005d1284
    PUSH EBX                            ; 005d1287
    MOV dword ptr [ESP + 0x64],EAX      ; 005d1288
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d128c
    LEA ESI,[ESP + 0x1c]                ; 005d128f
    LEA EDI,[ESP + 0x4c]                ; 005d1293
    CALL dword ptr [EAX + 0x6c]         ; 005d1297
        ;   Label: prt_5d1297_11b7af31
    ADD ESP,0x4                         ; 005d129a
    LEA EAX,[ESP + 0x48]                ; 005d129d
    JMP 0x03fc49b4                      ; 005d12a1
        ;   XREF to: 03fc49b4 (UNCONDITIONAL_JUMP)  ; LAB_03fc49b4
    CALL dword ptr [EAX + 0x64]         ; 005d12b2
        ;   Label: LAB_005d12b2
    ADD ESP,0x8                         ; 005d12b5
    TEST EAX,EAX                        ; 005d12b8
    JNZ 0x005d1277                      ; 005d12ba
        ;   XREF to: 005d1277 (CONDITIONAL_JUMP)  ; LAB_005d1277
    ADD ESP,0x64                        ; 005d12bc
    POP EBP                             ; 005d12bf
    POP EDI                             ; 005d12c0
    POP ESI                             ; 005d12c1
    POP EBX                             ; 005d12c2
    RET                                 ; 005d12c3
    MOV ECX,0x6                         ; 03fc4976
        ;   Label: LAB_03fc4976
    PUSH EAX                            ; 03fc497b
    LEA ESI,[ESP + 0x4]                 ; 03fc497c
    MOV EAX,dword ptr [ESP + 0x64]      ; 03fc4980
    PUSH EBX                            ; 03fc4984
    MOV ECX,dword ptr [ESI]             ; 03fc4985
    MOV dword ptr [EDI],ECX             ; 03fc4987
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4989
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc498c
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc498f
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4992
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4995
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4998
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc499b
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc499e
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc49a1
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc49a4
    ADD ESI,0x18                        ; 03fc49a7
    ADD EDI,0x18                        ; 03fc49aa
    XOR ECX,ECX                         ; 03fc49ad
    JMP 0x005d126d                      ; 03fc49af
        ;   XREF to: 005d126d (UNCONDITIONAL_JUMP)  ; LAB_005d126d
    MOV ECX,0x6                         ; 03fc49b4
        ;   Label: LAB_03fc49b4
    PUSH EAX                            ; 03fc49b9
    LEA ESI,[ESP + 0x1c]                ; 03fc49ba
    MOV EAX,dword ptr [ESP + 0x64]      ; 03fc49be
    PUSH EBP                            ; 03fc49c2
    MOV ECX,dword ptr [ESI]             ; 03fc49c3
    MOV dword ptr [EDI],ECX             ; 03fc49c5
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc49c7
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc49ca
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc49cd
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc49d0
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc49d3
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc49d6
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc49d9
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc49dc
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc49df
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc49e2
    ADD ESI,0x18                        ; 03fc49e5
    ADD EDI,0x18                        ; 03fc49e8
    XOR ECX,ECX                         ; 03fc49eb
    JMP 0x005d12b2                      ; 03fc49ed
        ;   XREF to: 005d12b2 (UNCONDITIONAL_JUMP)  ; LAB_005d12b2

