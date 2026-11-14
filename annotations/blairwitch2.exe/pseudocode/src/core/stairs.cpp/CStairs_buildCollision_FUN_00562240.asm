; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00562240(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stairs.cpp_CStairs_setup_FUN_00561f60 at 00561f72
;
; Referenced Globals:
;   undefined4 DAT_005eb170
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562240
        ;   Label: core_stairs.cpp_CStairs_buildCollision_FUN_00562240
    PUSH ESI                            ; 00562241
    PUSH EBP                            ; 00562242
    SUB ESP,0x4c                        ; 00562243
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00562246
    FLD double ptr [0x005eb170]         ; 0056224a | DAT_005eb170
    FLD float ptr [EBX + 0x2bc]         ; 00562250
    FMUL ST1                            ; 00562256
    FLD float ptr [EBX + 0x2bc]         ; 00562258
    FCHS                                ; 0056225e
    FMULP ST2                           ; 00562260
    MOV EDX,dword ptr [EBX + 0x2c8]     ; 00562262
    XOR ESI,ESI                         ; 00562268
    FSTP float ptr [ESP + 0x40]         ; 0056226a
    FSTP float ptr [ESP + 0x44]         ; 0056226e
    TEST EDX,EDX                        ; 00562272
    JLE 0x0056236b                      ; 00562274
        ;   XREF to: 0056236b (CONDITIONAL_JUMP)  ; LAB_0056236b
    PUSH EDI                            ; 0056227a
    LEA EDI,[EBX + 0x2cc]               ; 0056227b
    LEA EBP,[EBX + 0x304]               ; 00562281
    INC ESI                             ; 00562287
        ;   Label: LAB_00562287
    MOV dword ptr [ESP + 0x4c],ESI      ; 00562288
    FILD dword ptr [ESP + 0x4c]         ; 0056228c
    FLD float ptr [EBX + 0x2b4]         ; 00562290
    FMUL ST1                            ; 00562296
    FLD float ptr [EBX + 0x2b8]         ; 00562298
    FMULP ST2                           ; 0056229e
    MOV EAX,dword ptr [ESP + 0x48]      ; 005622a0
    FSTP float ptr [ESP + 0x38]         ; 005622a4
    FSTP float ptr [ESP + 0x40]         ; 005622a8
    FLD float ptr [ESP + 0x38]          ; 005622ac
    FLD float ptr [ESP + 0x40]          ; 005622b0
    FSUB float ptr [EBX + 0x2c4]        ; 005622b4
    FXCH                                ; 005622ba
    FSUB float ptr [EBX + 0x2c0]        ; 005622bc
    MOV dword ptr [ESP + 0x4],EAX       ; 005622c2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005622c6
    MOV dword ptr [ESP + 0x8],EAX       ; 005622ca
    MOV EAX,dword ptr [ESP + 0x40]      ; 005622ce
    MOV dword ptr [ESP + 0xc],EAX       ; 005622d2
    MOV EAX,dword ptr [ESP + 0x44]      ; 005622d6
    MOV dword ptr [ESP + 0x10],EAX      ; 005622da
    MOV EAX,dword ptr [ESP + 0x38]      ; 005622de
    MOV dword ptr [ESP + 0x14],EAX      ; 005622e2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005622e6
    MOV dword ptr [ESP + 0x18],EAX      ; 005622ea
    MOV EAX,dword ptr [ESP + 0x44]      ; 005622ee
    FSTP float ptr [ESP + 0x3c]         ; 005622f2
    MOV dword ptr [ESP + 0x28],EAX      ; 005622f6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005622fa
    FSTP float ptr [ESP + 0x34]         ; 005622fe
    MOV dword ptr [ESP + 0x2c],EAX      ; 00562302
    MOV EAX,dword ptr [ESP + 0x34]      ; 00562306
    MOV dword ptr [ESP + 0x30],EAX      ; 0056230a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056230e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00562312
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00562316
    MOV dword ptr [ESP + 0x20],EAX      ; 0056231a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056231e
    MOV dword ptr [ESP + 0x24],EAX      ; 00562322
    LEA EAX,[ESP + 0x28]                ; 00562326
    PUSH EAX                            ; 0056232a
    LEA EAX,[ESP + 0x14]                ; 0056232b
    PUSH EAX                            ; 0056232f
    LEA EAX,[ESP + 0xc]                 ; 00562330
    PUSH EAX                            ; 00562334
    PUSH EDI                            ; 00562335
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00562336
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0056233b
    LEA EAX,[ESP + 0x1c]                ; 0056233e
    PUSH EAX                            ; 00562342
    LEA EAX,[ESP + 0x2c]                ; 00562343
    PUSH EAX                            ; 00562347
    LEA EAX,[ESP + 0xc]                 ; 00562348
    PUSH EAX                            ; 0056234c
    PUSH EBP                            ; 0056234d
    ADD EDI,0x70                        ; 0056234e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00562351
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00562356
    MOV ECX,dword ptr [EBX + 0x2c8]     ; 00562359
    ADD EBP,0x70                        ; 0056235f
    CMP ESI,ECX                         ; 00562362
    JL 0x00562287                       ; 00562364
        ;   XREF to: 00562287 (CONDITIONAL_JUMP)  ; LAB_00562287
    POP EDI                             ; 0056236a
    ADD ESP,0x4c                        ; 0056236b
        ;   Label: LAB_0056236b
    POP EBP                             ; 0056236e
    POP ESI                             ; 0056236f
    POP EBX                             ; 00562370
    RET                                 ; 00562371

