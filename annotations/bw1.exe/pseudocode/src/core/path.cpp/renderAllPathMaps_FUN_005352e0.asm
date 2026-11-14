; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderAllPathMaps_FUN_005352e0(int depth,int red,int green,int fog)
;
; Parameters:
; int              Stack[0x4]:4   depth
; int              Stack[0x8]:4   red
; int              Stack[0xc]:4   green
; int              Stack[0x10]:4   fog
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e6be48
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005352e0
        ;   Label: core_path.cpp_renderAllPathMaps_FUN_005352e0
    PUSH ESI                            ; 005352e1
    PUSH EDI                            ; 005352e2
    PUSH EBP                            ; 005352e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005352e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005352e8
    MOV EDX,dword ptr [0x01e6be48]      ; 005352ec | DAT_01e6be48
    XOR ESI,ESI                         ; 005352f2
    TEST EDX,EDX                        ; 005352f4
    JLE 0x00535323                      ; 005352f6
        ;   XREF to: 00535323 (CONDITIONAL_JUMP)  ; LAB_00535323
    XOR EBX,EBX                         ; 005352f8
    CMP dword ptr [EBX + 0x1e6be4c],0x0 ; 005352fa
        ;   Label: LAB_005352fa
    JZ 0x00535328                       ; 00535301
        ;   XREF to: 00535328 (CONDITIONAL_JUMP)  ; LAB_00535328
    MOV EDX,dword ptr [EBX + 0x1e6be4c] ; 00535303
        ;   Label: LAB_00535303
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 00535309
    JLE 0x0053534d                      ; 00535313
        ;   XREF to: 0053534d (CONDITIONAL_JUMP)  ; LAB_0053534d
    MOV ECX,dword ptr [0x01e6be48]      ; 00535315 | DAT_01e6be48
        ;   Label: LAB_00535315
    INC ESI                             ; 0053531b
    ADD EBX,0x4                         ; 0053531c
    CMP ESI,ECX                         ; 0053531f
    JL 0x005352fa                       ; 00535321
        ;   XREF to: 005352fa (CONDITIONAL_JUMP)  ; LAB_005352fa
    POP EBP                             ; 00535323
        ;   Label: LAB_00535323
    POP EDI                             ; 00535324
    POP ESI                             ; 00535325
    POP EBX                             ; 00535326
    RET                                 ; 00535327
    MOV EDX,0x5ecad4                    ; 00535328
        ;   Label: LAB_00535328
    MOV ECX,0x6a9                       ; 0053532d
    PUSH 0x5ecae5                       ; 00535332
    MOV dword ptr [0x01d1d400],EDX      ; 00535337 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0053533d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00535343
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00535348
    JMP 0x00535303                      ; 0053534b
        ;   XREF to: 00535303 (UNCONDITIONAL_JUMP)  ; LAB_00535303
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053534d
        ;   Label: LAB_0053534d
    PUSH EAX                            ; 00535351
    PUSH EDI                            ; 00535352
    MOV ECX,dword ptr [ESP + 0x20]      ; 00535353
    PUSH ECX                            ; 00535357
    PUSH EBP                            ; 00535358
    PUSH EDX                            ; 00535359
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0 ; 0053535a
        ;   XREF to: 00534ca0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 0053535f
    JMP 0x00535315                      ; 00535362
        ;   XREF to: 00535315 (UNCONDITIONAL_JUMP)  ; LAB_00535315

