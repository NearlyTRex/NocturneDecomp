; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0047d430(CDraculaBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0047d480 at 0047d517
;
; Referenced Globals:
;   TerminatedCString s_Shot_thru_the_heart_005daf79
;   undefined4 DAT_005daf95
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0047d430
        ;   Label: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0047d430
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047d433
    CMP dword ptr [EAX + 0x30],0x6c     ; 0047d437
    JZ 0x0047d451                       ; 0047d43b
        ;   XREF to: 0047d451 (CONDITIONAL_JUMP)  ; LAB_0047d451
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047d43d
    MOV EDX,dword ptr [EAX]             ; 0047d441
    CMP EDX,dword ptr [ECX + 0xc280]    ; 0047d443
    JNZ 0x0047d451                      ; 0047d449
        ;   XREF to: 0047d451 (CONDITIONAL_JUMP)  ; LAB_0047d451
    CMP dword ptr [EAX + 0x30],0x68     ; 0047d44b
    JZ 0x0047d455                       ; 0047d44f
        ;   XREF to: 0047d455 (CONDITIONAL_JUMP)  ; LAB_0047d455
    ADD ESP,0x8                         ; 0047d451
        ;   Label: LAB_0047d451
    RET                                 ; 0047d454
    PUSH EDI                            ; 0047d455
        ;   Label: LAB_0047d455
    FLD float ptr [EAX + 0x4]           ; 0047d456
    PUSH 0x5daf79                       ; 0047d459 | = "Shot thru the heart\n"
    MOV EDI,dword ptr [0x00611100]      ; 0047d45e | g_CConsolePtr
    FLD ST0                             ; 0047d464
    FMUL double ptr [0x005daf95]        ; 0047d466 | DAT_005daf95
    PUSH EDI                            ; 0047d46c | g_CConsoleInstance
    FSTP ST1                            ; 0047d46d
    FSTP float ptr [EAX + 0x4]          ; 0047d46f
    CALL engine_console.cpp_FUN_00445430 ; 0047d472
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 0047d477
    POP EDI                             ; 0047d47a
    ADD ESP,0x8                         ; 0047d47b
    RET                                 ; 0047d47e

