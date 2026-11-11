; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_addButton_FUN_00412320(CAudioRecPuzzle *this_ptr,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; undefined4       Stack[0x18]:4   param_6
; undefined4       Stack[0x1c]:4   param_7
; undefined4       Stack[0x20]:4   param_8
; undefined4       Stack[0x24]:4   param_9
;
; Referenced Globals:
;   TerminatedCString s_core_bmppuzzl_cpp_005b675e
;   TerminatedCString s_Too_damn_many_buttons_005b6773
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412320
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_00412320
    PUSH ESI                            ; 00412321
    PUSH EDI                            ; 00412322
    MOV EBX,dword ptr [ESP + 0x10]      ; 00412323
    MOV EDX,dword ptr [ESP + 0x20]      ; 00412327
    PUSH EDX                            ; 0041232b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0041232c
    PUSH ECX                            ; 00412330
    MOV ESI,dword ptr [ESP + 0x20]      ; 00412331
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00412335
    PUSH ESI                            ; 00412339
    LEA ESI,[EDX*0x4 + 0x0]             ; 0041233a
    SUB ESI,EDX                         ; 00412341
    SHL ESI,0x2                         ; 00412343
    SUB ESI,EDX                         ; 00412346
    LEA EAX,[EBX + 0x54]                ; 00412348
    SHL ESI,0x2                         ; 0041234b
    ADD EAX,ESI                         ; 0041234e
    PUSH EAX                            ; 00412350
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00412351
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00412356
    LEA EAX,[EBX + ESI*0x1]             ; 00412359
    MOV EDX,dword ptr [ESP + 0x24]      ; 0041235c
    MOV dword ptr [EAX + 0x68],EDX      ; 00412360
    MOV EDX,dword ptr [ESP + 0x28]      ; 00412363
    MOV dword ptr [EAX + 0x6c],EDX      ; 00412367
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0041236a
    MOV dword ptr [EAX + 0x70],EDX      ; 0041236e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00412371
    MOV dword ptr [EAX + 0x74],EDX      ; 00412375
    MOV EDX,dword ptr [ESP + 0x20]      ; 00412378
    MOV dword ptr [EAX + 0x78],EDX      ; 0041237c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0041237f
    MOV dword ptr [EAX + 0x7c],EDX      ; 00412383
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00412386
    INC EDI                             ; 00412389
    MOV dword ptr [EBX + 0x1c],EDI      ; 0041238a
    CMP EDI,0x32                        ; 0041238d
    JG 0x00412396                       ; 00412390
        ;   XREF to: 00412396 (CONDITIONAL_JUMP)  ; LAB_00412396
    POP EDI                             ; 00412392
    POP ESI                             ; 00412393
    POP EBX                             ; 00412394
    RET                                 ; 00412395
    MOV EAX,0x5b675e                    ; 00412396 | = "..\\core\\bmppuzzl.cpp"
        ;   Label: LAB_00412396
    MOV EDX,0x290                       ; 0041239b
    PUSH 0x5b6773                       ; 004123a0 | = "Too damn many buttons"
    MOV [0x01d71de0],EAX                ; 004123a5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004123aa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004123b0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004123b5
    POP EDI                             ; 004123b8
    POP ESI                             ; 004123b9
    POP EBX                             ; 004123ba
    RET                                 ; 004123bb

