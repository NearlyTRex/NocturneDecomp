; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00535370(CVector3f *position,int depth,int red,int green,int fog)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e6be48
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048ef40
;   core_main.c_FUN_005030e0
;   core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535370
        ;   Label: core_path.cpp_renderPathMapsAtPosition_FUN_00535370
    PUSH ESI                            ; 00535371
    PUSH EDI                            ; 00535372
    PUSH EBP                            ; 00535373
    SUB ESP,0x18                        ; 00535374
    MOV EBP,dword ptr [ESP + 0x34]      ; 00535377
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0053537b
    PUSH EDX                            ; 0053537f
    PUSH 0x1fe5c1c                      ; 00535380
    LEA ESI,[ESP + 0x14]                ; 00535385
    LEA EDI,[ESP + 0x8]                 ; 00535389
    CALL core_dtrace.cpp_FUN_0048ef40   ; 0053538d
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ef40()
    LEA ESI,[ESP + 0x14]                ; 00535392
    ADD ESP,0x8                         ; 00535396
    MOVSD ES:EDI,ESI                    ; 00535399
    MOVSD ES:EDI,ESI                    ; 0053539a
    MOVSD ES:EDI,ESI                    ; 0053539b
    MOV ECX,dword ptr [0x01e6be48]      ; 0053539c | DAT_01e6be48
    XOR ESI,ESI                         ; 005353a2
    TEST ECX,ECX                        ; 005353a4
    JLE 0x005353d3                      ; 005353a6
        ;   XREF to: 005353d3 (CONDITIONAL_JUMP)  ; LAB_005353d3
    XOR EBX,EBX                         ; 005353a8
    CMP dword ptr [EBX + 0x1e6be4c],0x0 ; 005353aa
        ;   Label: LAB_005353aa
    JZ 0x005353db                       ; 005353b1
        ;   XREF to: 005353db (CONDITIONAL_JUMP)  ; LAB_005353db
    MOV EDX,dword ptr [EBX + 0x1e6be4c] ; 005353b3
        ;   Label: LAB_005353b3
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 005353b9
    JLE 0x00535400                      ; 005353c3
        ;   XREF to: 00535400 (CONDITIONAL_JUMP)  ; LAB_00535400
    MOV EDI,dword ptr [0x01e6be48]      ; 005353c5 | DAT_01e6be48
        ;   Label: LAB_005353c5
    INC ESI                             ; 005353cb
    ADD EBX,0x4                         ; 005353cc
    CMP ESI,EDI                         ; 005353cf
    JL 0x005353aa                       ; 005353d1
        ;   XREF to: 005353aa (CONDITIONAL_JUMP)  ; LAB_005353aa
    ADD ESP,0x18                        ; 005353d3
        ;   Label: LAB_005353d3
    POP EBP                             ; 005353d6
    POP EDI                             ; 005353d7
    POP ESI                             ; 005353d8
    POP EBX                             ; 005353d9
    RET                                 ; 005353da
    MOV EDX,0x5ecb04                    ; 005353db
        ;   Label: LAB_005353db
    MOV ECX,0x6b6                       ; 005353e0
    PUSH 0x5ecb15                       ; 005353e5
    MOV dword ptr [0x01d1d400],EDX      ; 005353ea | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005353f0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005353f6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005353fb
    JMP 0x005353b3                      ; 005353fe
        ;   XREF to: 005353b3 (UNCONDITIONAL_JUMP)  ; LAB_005353b3
    MOV ECX,dword ptr [ESP]             ; 00535400
        ;   Label: LAB_00535400
    CMP ECX,dword ptr [EDX + 0xc]       ; 00535403
    JNZ 0x005353c5                      ; 00535406
        ;   XREF to: 005353c5 (CONDITIONAL_JUMP)  ; LAB_005353c5
    MOV EDI,dword ptr [ESP + 0x4]       ; 00535408
    CMP EDI,dword ptr [EDX + 0x10]      ; 0053540c
    JNZ 0x005353c5                      ; 0053540f
        ;   XREF to: 005353c5 (CONDITIONAL_JUMP)  ; LAB_005353c5
    MOV ECX,dword ptr [ESP + 0x8]       ; 00535411
    CMP ECX,dword ptr [EDX + 0x14]      ; 00535415
    JNZ 0x005353c5                      ; 00535418
        ;   XREF to: 005353c5 (CONDITIONAL_JUMP)  ; LAB_005353c5
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0053541a
    PUSH EDI                            ; 0053541e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053541f
    PUSH EAX                            ; 00535423
    PUSH EBP                            ; 00535424
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00535425
    PUSH ECX                            ; 00535429
    PUSH EDX                            ; 0053542a
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0 ; 0053542b
        ;   XREF to: 00534ca0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 00535430
    JMP 0x005353c5                      ; 00535433
        ;   XREF to: 005353c5 (UNCONDITIONAL_JUMP)  ; LAB_005353c5

