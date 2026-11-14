; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderAllPathMaps_FUN_00513f90(int depth,int red,int green,int fog)
;
; Parameters:
; int              Stack[0x4]:4   depth
; int              Stack[0x8]:4   red
; int              Stack[0xc]:4   green
; int              Stack[0x10]:4   fog
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e4fed8
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_path.cpp_CPathMap_renderPathMap_FUN_00513950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513f90
        ;   Label: core_path.cpp_renderAllPathMaps_FUN_00513f90
    PUSH ESI                            ; 00513f91
    PUSH EDI                            ; 00513f92
    PUSH EBP                            ; 00513f93
    MOV EBP,dword ptr [ESP + 0x14]      ; 00513f94
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00513f98
    MOV EDX,dword ptr [0x01e4fed8]      ; 00513f9c | DAT_01e4fed8
    XOR ESI,ESI                         ; 00513fa2
    TEST EDX,EDX                        ; 00513fa4
    JLE 0x00513fd3                      ; 00513fa6
        ;   XREF to: 00513fd3 (CONDITIONAL_JUMP)  ; LAB_00513fd3
    XOR EBX,EBX                         ; 00513fa8
    CMP dword ptr [EBX + 0x1e4fedc],0x0 ; 00513faa
        ;   Label: LAB_00513faa
    JZ 0x00513fd8                       ; 00513fb1
        ;   XREF to: 00513fd8 (CONDITIONAL_JUMP)  ; LAB_00513fd8
    MOV EDX,dword ptr [EBX + 0x1e4fedc] ; 00513fb3
        ;   Label: LAB_00513fb3
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 00513fb9
    JLE 0x00513ffd                      ; 00513fc3
        ;   XREF to: 00513ffd (CONDITIONAL_JUMP)  ; LAB_00513ffd
    MOV ECX,dword ptr [0x01e4fed8]      ; 00513fc5 | DAT_01e4fed8
        ;   Label: LAB_00513fc5
    INC ESI                             ; 00513fcb
    ADD EBX,0x4                         ; 00513fcc
    CMP ESI,ECX                         ; 00513fcf
    JL 0x00513faa                       ; 00513fd1
        ;   XREF to: 00513faa (CONDITIONAL_JUMP)  ; LAB_00513faa
    POP EBP                             ; 00513fd3
        ;   Label: LAB_00513fd3
    POP EDI                             ; 00513fd4
    POP ESI                             ; 00513fd5
    POP EBX                             ; 00513fd6
    RET                                 ; 00513fd7
    MOV EDX,0x5e1879                    ; 00513fd8
        ;   Label: LAB_00513fd8
    MOV ECX,0x6a8                       ; 00513fdd
    PUSH 0x5e188a                       ; 00513fe2
    MOV dword ptr [0x01d046a0],EDX      ; 00513fe7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00513fed | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00513ff3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00513ff8
    JMP 0x00513fb3                      ; 00513ffb
        ;   XREF to: 00513fb3 (UNCONDITIONAL_JUMP)  ; LAB_00513fb3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00513ffd
        ;   Label: LAB_00513ffd
    PUSH EAX                            ; 00514001
    PUSH EDI                            ; 00514002
    MOV ECX,dword ptr [ESP + 0x20]      ; 00514003
    PUSH ECX                            ; 00514007
    PUSH EBP                            ; 00514008
    PUSH EDX                            ; 00514009
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_00513950 ; 0051400a
        ;   XREF to: 00513950 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 0051400f
    JMP 0x00513fc5                      ; 00514012
        ;   XREF to: 00513fc5 (UNCONDITIONAL_JUMP)  ; LAB_00513fc5

