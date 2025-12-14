; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_teleport.cpp_CTeleport_FUN_005daad0(CTeleport * this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_00654cdb = 0.5
;   double DOUBLE_00654ce3 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005daad0
        ;   Label: core_teleport.cpp_CTeleport_FUN_005daad0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005daad4
    FLD float ptr [EDX + 0x158]         ; 005daad8
    FCHS                                ; 005daade
    FLD double ptr [0x00654cdb]         ; 005daae0 | DOUBLE_00654cdb
    FXCH                                ; 005daae6
    FMUL ST1                            ; 005daae8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 005daaea
    FSTP float ptr [EAX]                ; 005daaf1
    FLD float ptr [EDX + 0x160]         ; 005daaf3
    FCHS                                ; 005daaf9
    FMUL ST1                            ; 005daafb
    FSTP float ptr [EAX + 0x8]          ; 005daafd
    FLD float ptr [EDX + 0x158]         ; 005dab00
    FMUL ST1                            ; 005dab06
    FSTP float ptr [EAX + 0xc]          ; 005dab08
    FLD float ptr [EDX + 0x15c]         ; 005dab0b
    FADD double ptr [0x00654ce3]        ; 005dab11 | DOUBLE_00654ce3
    FSTP float ptr [EAX + 0x10]         ; 005dab17
    FMUL float ptr [EDX + 0x160]        ; 005dab1a
    FSTP float ptr [EAX + 0x14]         ; 005dab20
    RET                                 ; 005dab23

