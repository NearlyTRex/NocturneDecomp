; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_005803e0(CWinFont *this_ptr,char *text_string)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005b341c = 001b3850
;
; Called Functions:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_00580110
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005803e0
        ;   Label: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005803e0
    PUSH ESI                            ; 005803e1
    SUB ESP,0x8                         ; 005803e2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005803e5
    MOV ESI,dword ptr [ESP + 0x18]      ; 005803e9
    PUSH -0x1                           ; 005803ed
    PUSH -0x1                           ; 005803ef
    PUSH EBX                            ; 005803f1
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_00580110 ; 005803f2
        ;   XREF to: 00580110 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_CWinFont_createTextBackground_FUN_00580110(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 005803f7
    TEST EAX,EAX                        ; 005803fa
    JNZ 0x00580404                      ; 005803fc
        ;   XREF to: 00580404 (CONDITIONAL_JUMP)  ; LAB_00580404
    ADD ESP,0x8                         ; 005803fe
    POP ESI                             ; 00580401
    POP EBX                             ; 00580402
    RET                                 ; 00580403
    PUSH EDI                            ; 00580404
        ;   Label: LAB_00580404
    MOV EDI,ESI                         ; 00580405
    SUB ECX,ECX                         ; 00580407
    DEC ECX                             ; 00580409
    XOR EAX,EAX                         ; 0058040a
    SCASB.REPNE ES:EDI                  ; 0058040c
    NOT ECX                             ; 0058040e
    DEC ECX                             ; 00580410
    LEA EAX,[ESP + 0x4]                 ; 00580411
    PUSH EAX                            ; 00580415
    PUSH ECX                            ; 00580416
    PUSH ESI                            ; 00580417
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 00580418
    PUSH EDX                            ; 0058041e
    CALL dword ptr CS:[0x5b341c]        ; 0058041f | PTR_GetTextExtentPoint32A_005b341c
    TEST EAX,EAX                        ; 00580426
    JNZ 0x0058042e                      ; 00580428
        ;   XREF to: 0058042e (CONDITIONAL_JUMP)  ; LAB_0058042e
    MOV dword ptr [ESP + 0x8],EAX       ; 0058042a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058042e
        ;   Label: LAB_0058042e
    MOV ESI,dword ptr [EBX + 0x6b78]    ; 00580432
    MOV EDI,dword ptr [EBX + 0x6b7c]    ; 00580438
    ADD EAX,ESI                         ; 0058043e
    ADD EAX,EDI                         ; 00580440
    POP EDI                             ; 00580442
    ADD ESP,0x8                         ; 00580443
    POP ESI                             ; 00580446
    POP EBX                             ; 00580447
    RET                                 ; 00580448

