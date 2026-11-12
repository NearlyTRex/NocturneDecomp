; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_addButton_FUN_00413cd0(CChemPuzzle *this_ptr,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; undefined4       Stack[0x18]:4   param_6
; undefined4       Stack[0x1c]:4   param_7
; undefined4       Stack[0x20]:4   param_8
; undefined4       Stack[0x24]:4   param_9
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413cd0
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_addButton_FUN_00413cd0
    PUSH ESI                            ; 00413cd1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00413cd2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00413cd6
    PUSH EDX                            ; 00413cda
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00413cdb
    PUSH ECX                            ; 00413cdf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00413ce0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00413ce4
    PUSH EBX                            ; 00413ce8
    LEA EBX,[EDX*0x4 + 0x0]             ; 00413ce9
    SUB EBX,EDX                         ; 00413cf0
    SHL EBX,0x2                         ; 00413cf2
    SUB EBX,EDX                         ; 00413cf5
    LEA EAX,[ESI + 0x70]                ; 00413cf7
    SHL EBX,0x2                         ; 00413cfa
    ADD EAX,EBX                         ; 00413cfd
    PUSH EAX                            ; 00413cff
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00413d00
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00413d05
    LEA EAX,[ESI + EBX*0x1]             ; 00413d08
    MOV EDX,dword ptr [ESP + 0x20]      ; 00413d0b
    MOV dword ptr [EAX + 0x84],EDX      ; 00413d0f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00413d15
    MOV dword ptr [EAX + 0x88],EDX      ; 00413d19
    MOV EDX,dword ptr [ESP + 0x28]      ; 00413d1f
    MOV dword ptr [EAX + 0x8c],EDX      ; 00413d23
    MOV EDX,dword ptr [ESP + 0x18]      ; 00413d29
    MOV dword ptr [EAX + 0x90],EDX      ; 00413d2d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00413d33
    MOV dword ptr [EAX + 0x94],EDX      ; 00413d37
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00413d3d
    MOV dword ptr [EAX + 0x98],EDX      ; 00413d41
    INC dword ptr [ESI + 0x20]          ; 00413d47
    POP ESI                             ; 00413d4a
    POP EBX                             ; 00413d4b
    RET                                 ; 00413d4c

