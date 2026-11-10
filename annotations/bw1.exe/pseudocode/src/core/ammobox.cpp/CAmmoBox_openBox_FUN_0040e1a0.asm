; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(CAmmoBox *this_ptr,float open_pct)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   open_pct
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   core_doc.cpp_FUN_00469550 at 00469fcc
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c74ca
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 005863bf
;
; Referenced Globals:
;   TerminatedCString s_Open_pct_f_005d31cd
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e1a0
        ;   Label: core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e1a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e1a5
    FLD float ptr [ESP + 0xc]           ; 0040e1a9
    MOV dword ptr [EBX + 0x31c],EAX     ; 0040e1ad
    SUB ESP,0x8                         ; 0040e1b3
    FSTP double ptr [ESP]               ; 0040e1b6
    PUSH 0x5d31cd                       ; 0040e1b9 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x00611100]      ; 0040e1be | g_CConsolePtr
    PUSH EDX                            ; 0040e1c4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0040e1c5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV ECX,dword ptr [EBX + 0x348]     ; 0040e1ca
    ADD ESP,0x10                        ; 0040e1d0
    TEST ECX,ECX                        ; 0040e1d3
    JNZ 0x0040e1eb                      ; 0040e1d5
        ;   XREF to: 0040e1eb (CONDITIONAL_JUMP)  ; LAB_0040e1eb
    MOV AH,byte ptr [EBX + 0x328]       ; 0040e1d7
    MOV dword ptr [EBX + 0x348],0x1     ; 0040e1dd
    TEST AH,AH                          ; 0040e1e7
    JNZ 0x0040e1ed                      ; 0040e1e9
        ;   XREF to: 0040e1ed (CONDITIONAL_JUMP)  ; LAB_0040e1ed
    POP EBX                             ; 0040e1eb
        ;   Label: LAB_0040e1eb
    RET                                 ; 0040e1ec
    LEA EDX,[EBX + 0x328]               ; 0040e1ed
        ;   Label: LAB_0040e1ed
    PUSH EDX                            ; 0040e1f3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e1f4
    PUSH EBX                            ; 0040e1fa
    CALL dword ptr [EAX + 0x2c]         ; 0040e1fb
    ADD ESP,0x8                         ; 0040e1fe
    POP EBX                             ; 0040e201
    RET                                 ; 0040e202

