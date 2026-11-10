; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00514020(CVector3f *position,int depth,int red,int green,int fog)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e4fed8
;
; Called Functions:
;   core_dtrace.cpp_FUN_00476a50
;   core_main.c_FUN_004e4500
;   core_path.cpp_CPathMap_renderPathMap_FUN_00513950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514020
        ;   Label: core_path.cpp_renderPathMapsAtPosition_FUN_00514020
    PUSH ESI                            ; 00514021
    PUSH EDI                            ; 00514022
    PUSH EBP                            ; 00514023
    SUB ESP,0x18                        ; 00514024
    MOV EBP,dword ptr [ESP + 0x34]      ; 00514027
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051402b
    PUSH EDX                            ; 0051402f
    PUSH 0x1fc9c68                      ; 00514030
    LEA ESI,[ESP + 0x14]                ; 00514035
    LEA EDI,[ESP + 0x8]                 ; 00514039
    CALL core_dtrace.cpp_FUN_00476a50   ; 0051403d
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00476a50()
    LEA ESI,[ESP + 0x14]                ; 00514042
    ADD ESP,0x8                         ; 00514046
    MOVSD ES:EDI,ESI                    ; 00514049
    MOVSD ES:EDI,ESI                    ; 0051404a
    MOVSD ES:EDI,ESI                    ; 0051404b
    MOV ECX,dword ptr [0x01e4fed8]      ; 0051404c | DAT_01e4fed8
    XOR ESI,ESI                         ; 00514052
    TEST ECX,ECX                        ; 00514054
    JLE 0x00514083                      ; 00514056
        ;   XREF to: 00514083 (CONDITIONAL_JUMP)  ; LAB_00514083
    XOR EBX,EBX                         ; 00514058
    CMP dword ptr [EBX + 0x1e4fedc],0x0 ; 0051405a
        ;   Label: LAB_0051405a
    JZ 0x0051408b                       ; 00514061
        ;   XREF to: 0051408b (CONDITIONAL_JUMP)  ; LAB_0051408b
    MOV EDX,dword ptr [EBX + 0x1e4fedc] ; 00514063
        ;   Label: LAB_00514063
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 00514069
    JLE 0x005140b0                      ; 00514073
        ;   XREF to: 005140b0 (CONDITIONAL_JUMP)  ; LAB_005140b0
    MOV EDI,dword ptr [0x01e4fed8]      ; 00514075 | DAT_01e4fed8
        ;   Label: LAB_00514075
    INC ESI                             ; 0051407b
    ADD EBX,0x4                         ; 0051407c
    CMP ESI,EDI                         ; 0051407f
    JL 0x0051405a                       ; 00514081
        ;   XREF to: 0051405a (CONDITIONAL_JUMP)  ; LAB_0051405a
    ADD ESP,0x18                        ; 00514083
        ;   Label: LAB_00514083
    POP EBP                             ; 00514086
    POP EDI                             ; 00514087
    POP ESI                             ; 00514088
    POP EBX                             ; 00514089
    RET                                 ; 0051408a
    MOV EDX,0x5e18a9                    ; 0051408b
        ;   Label: LAB_0051408b
    MOV ECX,0x6b5                       ; 00514090
    PUSH 0x5e18ba                       ; 00514095
    MOV dword ptr [0x01d046a0],EDX      ; 0051409a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005140a0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005140a6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005140ab
    JMP 0x00514063                      ; 005140ae
        ;   XREF to: 00514063 (UNCONDITIONAL_JUMP)  ; LAB_00514063
    MOV ECX,dword ptr [ESP]             ; 005140b0
        ;   Label: LAB_005140b0
    CMP ECX,dword ptr [EDX + 0xc]       ; 005140b3
    JNZ 0x00514075                      ; 005140b6
        ;   XREF to: 00514075 (CONDITIONAL_JUMP)  ; LAB_00514075
    MOV EDI,dword ptr [ESP + 0x4]       ; 005140b8
    CMP EDI,dword ptr [EDX + 0x10]      ; 005140bc
    JNZ 0x00514075                      ; 005140bf
        ;   XREF to: 00514075 (CONDITIONAL_JUMP)  ; LAB_00514075
    MOV ECX,dword ptr [ESP + 0x8]       ; 005140c1
    CMP ECX,dword ptr [EDX + 0x14]      ; 005140c5
    JNZ 0x00514075                      ; 005140c8
        ;   XREF to: 00514075 (CONDITIONAL_JUMP)  ; LAB_00514075
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005140ca
    PUSH EDI                            ; 005140ce
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005140cf
    PUSH EAX                            ; 005140d3
    PUSH EBP                            ; 005140d4
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005140d5
    PUSH ECX                            ; 005140d9
    PUSH EDX                            ; 005140da
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_00513950 ; 005140db
        ;   XREF to: 00513950 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 005140e0
    JMP 0x00514075                      ; 005140e3
        ;   XREF to: 00514075 (UNCONDITIONAL_JUMP)  ; LAB_00514075

