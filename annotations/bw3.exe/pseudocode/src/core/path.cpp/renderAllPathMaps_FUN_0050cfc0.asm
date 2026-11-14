; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderAllPathMaps_FUN_0050cfc0(int depth,int red,int green,int fog)
;
; Parameters:
; int              Stack[0x4]:4   depth
; int              Stack[0x8]:4   red
; int              Stack[0xc]:4   green
; int              Stack[0x10]:4   fog
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ec1518
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_path.cpp_CPathMap_renderPathMap_FUN_0050c980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cfc0
        ;   Label: core_path.cpp_renderAllPathMaps_FUN_0050cfc0
    PUSH ESI                            ; 0050cfc1
    PUSH EDI                            ; 0050cfc2
    PUSH EBP                            ; 0050cfc3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0050cfc4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050cfc8
    MOV EDX,dword ptr [0x01ec1518]      ; 0050cfcc | DAT_01ec1518
    XOR ESI,ESI                         ; 0050cfd2
    TEST EDX,EDX                        ; 0050cfd4
    JLE 0x0050d003                      ; 0050cfd6
        ;   XREF to: 0050d003 (CONDITIONAL_JUMP)  ; LAB_0050d003
    XOR EBX,EBX                         ; 0050cfd8
    CMP dword ptr [EBX + 0x1ec151c],0x0 ; 0050cfda
        ;   Label: LAB_0050cfda
    JZ 0x0050d008                       ; 0050cfe1
        ;   XREF to: 0050d008 (CONDITIONAL_JUMP)  ; LAB_0050d008
    MOV EDX,dword ptr [EBX + 0x1ec151c] ; 0050cfe3
        ;   Label: LAB_0050cfe3
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 0050cfe9
    JLE 0x0050d02d                      ; 0050cff3
        ;   XREF to: 0050d02d (CONDITIONAL_JUMP)  ; LAB_0050d02d
    MOV ECX,dword ptr [0x01ec1518]      ; 0050cff5 | DAT_01ec1518
        ;   Label: LAB_0050cff5
    INC ESI                             ; 0050cffb
    ADD EBX,0x4                         ; 0050cffc
    CMP ESI,ECX                         ; 0050cfff
    JL 0x0050cfda                       ; 0050d001
        ;   XREF to: 0050cfda (CONDITIONAL_JUMP)  ; LAB_0050cfda
    POP EBP                             ; 0050d003
        ;   Label: LAB_0050d003
    POP EDI                             ; 0050d004
    POP ESI                             ; 0050d005
    POP EBX                             ; 0050d006
    RET                                 ; 0050d007
    MOV EDX,0x5cb93c                    ; 0050d008
        ;   Label: LAB_0050d008
    MOV ECX,0x6a9                       ; 0050d00d
    PUSH 0x5cb94d                       ; 0050d012
    MOV dword ptr [0x01d71de0],EDX      ; 0050d017 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050d01d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050d023
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050d028
    JMP 0x0050cfe3                      ; 0050d02b
        ;   XREF to: 0050cfe3 (UNCONDITIONAL_JUMP)  ; LAB_0050cfe3
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050d02d
        ;   Label: LAB_0050d02d
    PUSH EAX                            ; 0050d031
    PUSH EDI                            ; 0050d032
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050d033
    PUSH ECX                            ; 0050d037
    PUSH EBP                            ; 0050d038
    PUSH EDX                            ; 0050d039
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_0050c980 ; 0050d03a
        ;   XREF to: 0050c980 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_0050c980(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 0050d03f
    JMP 0x0050cff5                      ; 0050d042
        ;   XREF to: 0050cff5 (UNCONDITIONAL_JUMP)  ; LAB_0050cff5

