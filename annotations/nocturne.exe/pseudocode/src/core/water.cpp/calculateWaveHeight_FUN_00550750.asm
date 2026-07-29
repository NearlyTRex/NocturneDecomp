; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_water_cpp_calculateWaveHeight_FUN_00550750(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_00597527
;   undefined4 DAT_0059752f
;   undefined4 DAT_00597537
;   undefined4 DAT_02dd9260
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00550750
        ;   Label: core_water.cpp_calculateWaveHeight_FUN_00550750
    MOV EAX,dword ptr [ESP + 0x10]      ; 00550753
    MOV dword ptr [ESP + 0x4],EAX       ; 00550757
    FLD double ptr [0x00597527]         ; 0055075b | DAT_00597527
    FILD dword ptr [ESP + 0x4]          ; 00550761
    FMUL ST1                            ; 00550765
    MOV EAX,dword ptr [ESP + 0xc]       ; 00550767
    FMUL double ptr [0x0059752f]        ; 0055076b | DAT_0059752f
    MOV dword ptr [ESP + 0x4],EAX       ; 00550771
    FILD dword ptr [ESP + 0x4]          ; 00550775
    FMULP ST2                           ; 00550779
    FADDP                               ; 0055077b
    FADD float ptr [0x02dd9260]         ; 0055077d | DAT_02dd9260
    FSIN                                ; 00550783
    FMUL double ptr [0x00597537]        ; 00550785 | DAT_00597537
    FSTP float ptr [ESP]                ; 0055078b
    MOV EAX,dword ptr [ESP]             ; 0055078e
    ADD ESP,0x8                         ; 00550791
    RET                                 ; 00550794

