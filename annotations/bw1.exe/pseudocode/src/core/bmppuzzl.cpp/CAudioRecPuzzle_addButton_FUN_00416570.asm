; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_00416570(CAudioRecPuzzle *this_ptr,int index,char *filename,int width,int height,int enabled,int x,int y,int visible)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   filename
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; int              Stack[0x18]:4   enabled
; int              Stack[0x1c]:4   x
; int              Stack[0x20]:4   y
; int              Stack[0x24]:4   visible
;
; Referenced Globals:
;   TerminatedCString s_core_bmppuzzl_cpp_005d3f12
;   TerminatedCString s_Too_damn_many_buttons_005d3f27
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416570
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_00416570
    PUSH ESI                            ; 00416571
    PUSH EDI                            ; 00416572
    MOV EBX,dword ptr [ESP + 0x10]      ; 00416573
    MOV EDX,dword ptr [ESP + 0x20]      ; 00416577
    PUSH EDX                            ; 0041657b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0041657c
    PUSH ECX                            ; 00416580
    MOV ESI,dword ptr [ESP + 0x20]      ; 00416581
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00416585
    PUSH ESI                            ; 00416589
    LEA ESI,[EDX*0x4 + 0x0]             ; 0041658a
    SUB ESI,EDX                         ; 00416591
    SHL ESI,0x2                         ; 00416593
    SUB ESI,EDX                         ; 00416596
    LEA EAX,[EBX + 0x60]                ; 00416598
    SHL ESI,0x2                         ; 0041659b
    ADD EAX,ESI                         ; 0041659e
    PUSH EAX                            ; 004165a0
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004165a1
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004165a6
    LEA EAX,[EBX + ESI*0x1]             ; 004165a9
    MOV EDX,dword ptr [ESP + 0x24]      ; 004165ac
    MOV dword ptr [EAX + 0x74],EDX      ; 004165b0
    MOV EDX,dword ptr [ESP + 0x28]      ; 004165b3
    MOV dword ptr [EAX + 0x78],EDX      ; 004165b7
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004165ba
    MOV dword ptr [EAX + 0x7c],EDX      ; 004165be
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004165c1
    MOV dword ptr [EAX + 0x80],EDX      ; 004165c5
    MOV EDX,dword ptr [ESP + 0x20]      ; 004165cb
    MOV dword ptr [EAX + 0x84],EDX      ; 004165cf
    MOV EDX,dword ptr [ESP + 0x30]      ; 004165d5
    MOV dword ptr [EAX + 0x88],EDX      ; 004165d9
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004165df
    INC EDI                             ; 004165e2
    MOV dword ptr [EBX + 0x1c],EDI      ; 004165e3
    CMP EDI,0x32                        ; 004165e6
    JG 0x004165ef                       ; 004165e9
        ;   XREF to: 004165ef (CONDITIONAL_JUMP)  ; LAB_004165ef
    POP EDI                             ; 004165eb
    POP ESI                             ; 004165ec
    POP EBX                             ; 004165ed
    RET                                 ; 004165ee
    MOV EAX,0x5d3f12                    ; 004165ef | = "..\\core\\bmppuzzl.cpp"
        ;   Label: LAB_004165ef
    MOV EDX,0x299                       ; 004165f4
    PUSH 0x5d3f27                       ; 004165f9 | = "Too damn many buttons"
    MOV [0x01d1d400],EAX                ; 004165fe | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00416603 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00416609
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041660e
    POP EDI                             ; 00416611
    POP ESI                             ; 00416612
    POP EBX                             ; 00416613
    RET                                 ; 00416614

