; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_FUN_0040e600(CAmmoBox *this_ptr,float open_pct)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   open_pct
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   core_doc.cpp_FUN_00450c60 at 004513e5
;   core_gabriela.cpp_FUN_004ad640 at 004ae548
;   core_stranger.cpp_FUN_00563060 at 0056391f
;
; Referenced Globals:
;   TerminatedCString s_Open_pct_f_005cb262
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e600
        ;   Label: core_ammobox.cpp_FUN_0040e600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e601
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e605
    FLD float ptr [ESP + 0xc]           ; 0040e609
    MOV dword ptr [EBX + 0x478],EAX     ; 0040e60d
    SUB ESP,0x8                         ; 0040e613
    FSTP double ptr [ESP]               ; 0040e616
    PUSH 0x5cb262                       ; 0040e619 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0040e61e | g_CConsolePtr
    PUSH EDX                            ; 0040e624 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0040e625
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV ECX,dword ptr [EBX + 0x4a4]     ; 0040e62a
    ADD ESP,0x10                        ; 0040e630
    TEST ECX,ECX                        ; 0040e633
    JNZ 0x0040e64b                      ; 0040e635
        ;   XREF to: 0040e64b (CONDITIONAL_JUMP)  ; LAB_0040e64b
    MOV AH,byte ptr [EBX + 0x484]       ; 0040e637
    MOV dword ptr [EBX + 0x4a4],0x1     ; 0040e63d
    TEST AH,AH                          ; 0040e647
    JNZ 0x0040e64d                      ; 0040e649
        ;   XREF to: 0040e64d (CONDITIONAL_JUMP)  ; LAB_0040e64d
    POP EBX                             ; 0040e64b
        ;   Label: LAB_0040e64b
    RET                                 ; 0040e64c
    LEA EDX,[EBX + 0x484]               ; 0040e64d
        ;   Label: LAB_0040e64d
    PUSH EDX                            ; 0040e653
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040e654
    PUSH EBX                            ; 0040e65a
    CALL dword ptr [EAX + 0x34]         ; 0040e65b
    ADD ESP,0x8                         ; 0040e65e
    POP EBX                             ; 0040e661
    RET                                 ; 0040e662

