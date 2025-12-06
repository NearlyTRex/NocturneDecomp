; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_0042307e()
;
;
; Referenced Globals:
;   void* switchdataD_00423068 = 00423090
;   TerminatedCString s_Custom_0061698f
;   TerminatedCString s_Flashlight_00616996
;   TerminatedCString s_Lantern_006169a1
;   TerminatedCString s_Globe_006169a9
;   TerminatedCString s_anon_006169af
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0042307e
        ;   Label: core_boxactor.cpp_FUN_0042307e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00423080
    CMP EAX,0x3                         ; 00423084
    JA 0x004230a8                       ; 00423087 | default
        ;   XREF to: 004230a8 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x423068]  ; 00423089 | pointer switchdataD_00423068
        ;   Label: switchD
    MOV EAX,0x61698f                    ; 00423090 | = "Custom" | s_Custom_0061698f = Custom
        ;   Label: caseD_0
    RET                                 ; 00423095
    MOV EAX,0x616996                    ; 00423096 | = "Flashlight" | s_Flashlight_00616996 = Flashlight
        ;   Label: caseD_1
    RET                                 ; 0042309b
    MOV EAX,0x6169a1                    ; 0042309c | = "Lantern" | s_Lantern_006169a1 = Lantern
        ;   Label: caseD_2
    RET                                 ; 004230a1
    MOV EAX,0x6169a9                    ; 004230a2 | = "Globe" | s_Globe_006169a9 = Globe
        ;   Label: caseD_3
    RET                                 ; 004230a7
    MOV EAX,0x6169af                    ; 004230a8 | = "???" | s_anon_006169af = ???
        ;   Label: default
    RET                                 ; 004230ad

