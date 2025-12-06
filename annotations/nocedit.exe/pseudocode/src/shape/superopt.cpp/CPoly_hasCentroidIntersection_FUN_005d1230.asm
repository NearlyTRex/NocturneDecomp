; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly * this_ptr, CPoly * other)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other
; Local Variables:
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x14]:4  local_14
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
    ADD ESP,0x4                         ; 005d1255
    LEA EAX,[ESP + 0x30]                ; 005d1258
    MOV ECX,0x6                         ; 005d125c
    PUSH EAX                            ; 005d1261
    LEA ESI,[ESP + 0x4]                 ; 005d1262
    MOV EAX,dword ptr [ESP + 0x64]      ; 005d1266
    PUSH EBX                            ; 005d126a
    MOVSD.REP ES:EDI,ESI                ; 005d126b
    CALL dword ptr [EAX + 0x64]         ; 005d126d
    ADD ESP,0x8                         ; 005d1270
    TEST EAX,EAX                        ; 005d1273
    JZ 0x005d1284                       ; 005d1275 | LAB_005d1284
        ;   XREF to: 005d1284 (CONDITIONAL_JUMP)
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
    ADD ESP,0x4                         ; 005d129a
    LEA EAX,[ESP + 0x48]                ; 005d129d
    MOV ECX,0x6                         ; 005d12a1
    PUSH EAX                            ; 005d12a6
    LEA ESI,[ESP + 0x1c]                ; 005d12a7
    MOV EAX,dword ptr [ESP + 0x64]      ; 005d12ab
    PUSH EBP                            ; 005d12af
    MOVSD.REP ES:EDI,ESI                ; 005d12b0
    CALL dword ptr [EAX + 0x64]         ; 005d12b2
    ADD ESP,0x8                         ; 005d12b5
    TEST EAX,EAX                        ; 005d12b8
    JNZ 0x005d1277                      ; 005d12ba | LAB_005d1277
        ;   XREF to: 005d1277 (CONDITIONAL_JUMP)
    ADD ESP,0x64                        ; 005d12bc
    POP EBP                             ; 005d12bf
    POP EDI                             ; 005d12c0
    POP ESI                             ; 005d12c1
    POP EBX                             ; 005d12c2
    RET                                 ; 005d12c3

