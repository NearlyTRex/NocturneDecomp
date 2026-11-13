; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_addButton_FUN_004180c0(CChemPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   filename
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; int              Stack[0x18]:4   enabled
; int              Stack[0x1c]:4   x
; int              Stack[0x20]:4   y
; int              Stack[0x24]:4   visible
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004180c0
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_addButton_FUN_004180c0
    PUSH ESI                            ; 004180c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004180c2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004180c6
    PUSH EDX                            ; 004180ca
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004180cb
    PUSH ECX                            ; 004180cf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004180d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 004180d4
    PUSH EBX                            ; 004180d8
    LEA EBX,[EDX*0x4 + 0x0]             ; 004180d9
    SUB EBX,EDX                         ; 004180e0
    SHL EBX,0x2                         ; 004180e2
    SUB EBX,EDX                         ; 004180e5
    LEA EAX,[ESI + 0x70]                ; 004180e7
    SHL EBX,0x2                         ; 004180ea
    ADD EAX,EBX                         ; 004180ed
    PUSH EAX                            ; 004180ef
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004180f0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004180f5
    LEA EAX,[ESI + EBX*0x1]             ; 004180f8
    MOV EDX,dword ptr [ESP + 0x20]      ; 004180fb
    MOV dword ptr [EAX + 0x84],EDX      ; 004180ff
    MOV EDX,dword ptr [ESP + 0x24]      ; 00418105
    MOV dword ptr [EAX + 0x88],EDX      ; 00418109
    MOV EDX,dword ptr [ESP + 0x28]      ; 0041810f
    MOV dword ptr [EAX + 0x8c],EDX      ; 00418113
    MOV EDX,dword ptr [ESP + 0x18]      ; 00418119
    MOV dword ptr [EAX + 0x90],EDX      ; 0041811d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00418123
    MOV dword ptr [EAX + 0x94],EDX      ; 00418127
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0041812d
    MOV dword ptr [EAX + 0x98],EDX      ; 00418131
    INC dword ptr [ESI + 0x20]          ; 00418137
    POP ESI                             ; 0041813a
    POP EBX                             ; 0041813b
    RET                                 ; 0041813c

