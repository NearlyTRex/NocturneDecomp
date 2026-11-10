; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_00580300(CWinFont *this_ptr)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_00580110 at 0058018b
;   engine_winfont.cpp_CWinFont_dtor_FUN_0057fe10 at 0057fe27
;
; Referenced Globals:
;   void* PTR_DeleteDC_005b3410 = 001b3822
;   void* PTR_SelectObject_005b3424 = 001b3874
;
; Called Functions:
;   DeleteDC
;   SelectObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580300
        ;   Label: engine_winfont.cpp_CWinFont_reset_FUN_00580300
    MOV EBX,dword ptr [ESP + 0x8]       ; 00580301
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 00580305
    TEST EDX,EDX                        ; 0058030b
    JNZ 0x0058032d                      ; 0058030d
        ;   XREF to: 0058032d (CONDITIONAL_JUMP)  ; LAB_0058032d
    MOV dword ptr [EBX + 0x6b6c],0x0    ; 0058030f
        ;   Label: LAB_0058030f
    MOV EAX,dword ptr [EBX + 0x6b6c]    ; 00580319
    MOV dword ptr [EBX + 0x6b68],EAX    ; 0058031f
    MOV dword ptr [EBX + 0x6b64],EAX    ; 00580325
    POP EBX                             ; 0058032b
    RET                                 ; 0058032c
    PUSH EDI                            ; 0058032d
        ;   Label: LAB_0058032d
    MOV ECX,dword ptr [EBX + 0x6a54]    ; 0058032e
    PUSH ECX                            ; 00580334
    PUSH EDX                            ; 00580335
    CALL dword ptr CS:[0x5b3424]        ; 00580336 | PTR_SelectObject_005b3424
    MOV EDI,dword ptr [EBX + 0x6a48]    ; 0058033d
    PUSH EDI                            ; 00580343
    MOV dword ptr [EBX + 0x6a54],0x0    ; 00580344
    CALL dword ptr CS:[0x5b3410]        ; 0058034e | PTR_DeleteDC_005b3410
    MOV dword ptr [EBX + 0x6a48],0x0    ; 00580355
    MOV dword ptr [EBX + 0x6a4c],0x0    ; 0058035f
    MOV dword ptr [EBX + 0x6a58],0x0    ; 00580369
    POP EDI                             ; 00580373
    JMP 0x0058030f                      ; 00580374
        ;   XREF to: 0058030f (UNCONDITIONAL_JUMP)  ; LAB_0058030f

