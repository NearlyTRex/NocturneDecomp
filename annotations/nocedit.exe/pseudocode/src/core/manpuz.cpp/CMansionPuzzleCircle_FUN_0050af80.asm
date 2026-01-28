; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0 at 0050925d
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0050af80
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af80
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050af83
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050af87
    SUB EAX,EDX                         ; 0050af8e
    MOV EDX,EAX                         ; 0050af90
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050af92
    SHL EDX,0x5                         ; 0050af96
    ADD EAX,0x1340                      ; 0050af99
    ADD EAX,EDX                         ; 0050af9e
    LEA ECX,[EAX + 0xc]                 ; 0050afa0
    LEA EDX,[EAX + 0x18]                ; 0050afa3
    FLD float ptr [ECX]                 ; 0050afa6
    FMUL float ptr [EDX]                ; 0050afa8
    FSTP float ptr [ESP + 0x18]         ; 0050afaa
    FLD float ptr [ECX + 0x4]           ; 0050afae
    FMUL float ptr [EDX]                ; 0050afb1
    FSTP float ptr [ESP + 0x1c]         ; 0050afb3
    FLD float ptr [ECX + 0x8]           ; 0050afb7
    FMUL float ptr [EDX]                ; 0050afba
    FSTP float ptr [ESP + 0x20]         ; 0050afbc
    FLD float ptr [EAX + 0x18]          ; 0050afc0
    FLD1                                ; 0050afc3
    FSUBRP                              ; 0050afc5
    FLD float ptr [EAX]                 ; 0050afc7
    FXCH                                ; 0050afc9
    FSTP float ptr [ESP + 0x24]         ; 0050afcb
    FMUL float ptr [ESP + 0x24]         ; 0050afcf
    FSTP float ptr [ESP]                ; 0050afd3
    FLD float ptr [EAX + 0x4]           ; 0050afd6
    FMUL float ptr [ESP + 0x24]         ; 0050afd9
    FSTP float ptr [ESP + 0x4]          ; 0050afdd
    FLD float ptr [EAX + 0x8]           ; 0050afe1
    FMUL float ptr [ESP + 0x24]         ; 0050afe4
    LEA EDX,[EAX + 0x1c]                ; 0050afe8
    FLD float ptr [ESP]                 ; 0050afeb
    FADD float ptr [ESP + 0x18]         ; 0050afee
    FLD float ptr [ESP + 0x4]           ; 0050aff2
    FXCH                                ; 0050aff6
    FSTP float ptr [ESP + 0xc]          ; 0050aff8
    LEA EAX,[ESP + 0xc]                 ; 0050affc
    FADD float ptr [ESP + 0x1c]         ; 0050b000
    FXCH                                ; 0050b004
    FST float ptr [ESP + 0x8]           ; 0050b006
    FADD float ptr [ESP + 0x20]         ; 0050b00a
    FXCH                                ; 0050b00e
    FSTP float ptr [ESP + 0x10]         ; 0050b010
    FSTP float ptr [ESP + 0x14]         ; 0050b014
    CMP EDX,EAX                         ; 0050b018
    JNZ 0x0050b020                      ; 0050b01a
        ;   XREF to: 0050b020 (CONDITIONAL_JUMP)  ; LAB_0050b020
    ADD ESP,0x28                        ; 0050b01c
    RET                                 ; 0050b01f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050b020
        ;   Label: LAB_0050b020
    MOV dword ptr [EDX],EAX             ; 0050b024
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050b026
    MOV dword ptr [EDX + 0x4],EAX       ; 0050b02a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050b02d
    MOV dword ptr [EDX + 0x8],EAX       ; 0050b031
    ADD ESP,0x28                        ; 0050b034
    RET                                 ; 0050b037

