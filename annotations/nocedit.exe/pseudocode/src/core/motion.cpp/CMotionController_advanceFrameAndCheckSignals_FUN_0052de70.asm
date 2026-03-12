; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   inout_motion_index
; float *          Stack[0xc]:4   inout_frame_number
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   scale_factor
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x28]:8  local_28
; float            Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  fStack_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d749
;
; Referenced Globals:
;   void* switchdataD_0052de54 = 0052df33
;   double DOUBLE_0063aaff = -0.000100000000000000
;   float FLOAT_0063ab07 = -1
;   double DOUBLE_0063ab0f = 0.00100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052de70
        ;   Label: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
    PUSH ESI                            ; 0052de71
    PUSH EDI                            ; 0052de72
    PUSH EBP                            ; 0052de73
    MOV EBP,ESP                         ; 0052de74
    SUB ESP,0x18                        ; 0052de76
    AND ESP,0xfffffff8                  ; 0052de79
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0052de7c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052de7f
    IMUL EBX,dword ptr [EDX],0x54c      ; 0052de82
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052de88
    MOV EAX,dword ptr [EAX]             ; 0052de8b
    ADD EAX,0x968                       ; 0052de8d
    ADD EBX,EAX                         ; 0052de92
    FLD float ptr [EBP + 0x20]          ; 0052de94
    FMUL float ptr [EBX + 0x20]         ; 0052de97
    XOR EDI,EDI                         ; 0052de9a
    XOR ECX,ECX                         ; 0052de9c
    FADD float ptr [ESI]                ; 0052de9e
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 0052dea0
    FSTP float ptr [ESP + 0x8]          ; 0052dea6
    TEST EAX,EAX                        ; 0052deaa
    JLE 0x0052ded7                      ; 0052deac
        ;   XREF to: 0052ded7 (CONDITIONAL_JUMP)  ; LAB_0052ded7
    MOV EDX,EBX                         ; 0052deae
    FLD float ptr [ESI]                 ; 0052deb0
        ;   Label: LAB_0052deb0
    FILD dword ptr [EDX + 0x4a8]        ; 0052deb2
    FSTP float ptr [ESP + 0xc]          ; 0052deb8
    FCOMP float ptr [ESP + 0xc]         ; 0052debc
    FNSTSW AX                           ; 0052dec0
    SAHF                                ; 0052dec2
    JBE 0x0052df4a                      ; 0052dec3
        ;   XREF to: 0052df4a (CONDITIONAL_JUMP)  ; LAB_0052df4a
    INC ECX                             ; 0052dec9
        ;   Label: LAB_0052dec9
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 0052deca
    ADD EDX,0x8                         ; 0052ded0
    CMP ECX,EAX                         ; 0052ded3
    JL 0x0052deb0                       ; 0052ded5
        ;   XREF to: 0052deb0 (CONDITIONAL_JUMP)  ; LAB_0052deb0
    FILD dword ptr [EBX + 0x64]         ; 0052ded7
        ;   Label: LAB_0052ded7
    FADD double ptr [0x0063aaff]        ; 0052deda | DOUBLE_0063aaff
    FLD float ptr [ESP + 0x8]           ; 0052dee0
    FCOMPP                              ; 0052dee4
    FNSTSW AX                           ; 0052dee6
    SAHF                                ; 0052dee8
    JC 0x0052dfe6                       ; 0052dee9
        ;   XREF to: 0052dfe6 (CONDITIONAL_JUMP)  ; LAB_0052dfe6
    MOV EDX,dword ptr [EBX + 0x60]      ; 0052deef
    ADD EDX,dword ptr [EBX + 0x64]      ; 0052def2
    PUSH dword ptr [EBP + 0x24]         ; 0052def5
    MOV dword ptr [ESP + 0x18],EDX      ; 0052def8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052defc
    FILD dword ptr [ESP + 0x18]         ; 0052deff
    SUB ESP,0x4                         ; 0052df03
    MOV EAX,dword ptr [EAX + 0x50]      ; 0052df06
    FSTP float ptr [ESP]                ; 0052df09
    SUB ESP,0x4                         ; 0052df0c
    FILD dword ptr [EBX + 0x60]         ; 0052df0f
    FADD float ptr [ESI]                ; 0052df12
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052df14
    FSTP float ptr [ESP]                ; 0052df17
    PUSH EDX                            ; 0052df1a
    CALL dword ptr [EAX + 0x8]          ; 0052df1b
    MOV EAX,dword ptr [EBX + 0x30]      ; 0052df1e
    SUB EAX,0x3                         ; 0052df21
    ADD ESP,0x10                        ; 0052df24
    CMP EAX,0x3                         ; 0052df27
    JA 0x0052df7f                       ; 0052df2a
        ;   XREF to: 0052df7f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x52de54]  ; 0052df2c | caseD_5 | switchdataD_0052de54
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x64]      ; 0052df33
        ;   Label: caseD_6
    DEC EAX                             ; 0052df36
    MOV dword ptr [ESP + 0x14],EAX      ; 0052df37
    FILD dword ptr [ESP + 0x14]         ; 0052df3b
    FSTP float ptr [ESI]                ; 0052df3f
    MOV EAX,EDI                         ; 0052df41
    MOV ESP,EBP                         ; 0052df43
    POP EBP                             ; 0052df45
    POP EDI                             ; 0052df46
    POP ESI                             ; 0052df47
    POP EBX                             ; 0052df48
    RET                                 ; 0052df49
    FLD float ptr [ESP + 0x8]           ; 0052df4a
        ;   Label: LAB_0052df4a
    FADD double ptr [0x0063ab0f]        ; 0052df4e | DOUBLE_0063ab0f
    FLD float ptr [ESP + 0xc]           ; 0052df54
    FSTP double ptr [ESP]               ; 0052df58
    FCOMP double ptr [ESP]              ; 0052df5b
    FNSTSW AX                           ; 0052df5e
    SAHF                                ; 0052df60
    JC 0x0052dec9                       ; 0052df61
        ;   XREF to: 0052dec9 (CONDITIONAL_JUMP)  ; LAB_0052dec9
    FLD double ptr [ESP]                ; 0052df67
    FADD double ptr [0x0063ab0f]        ; 0052df6a | DOUBLE_0063ab0f
    MOV EDI,dword ptr [EDX + 0x4ac]     ; 0052df70
    FSTP float ptr [ESP + 0x8]          ; 0052df76
    JMP 0x0052dec9                      ; 0052df7a
        ;   XREF to: 0052dec9 (UNCONDITIONAL_JUMP)  ; LAB_0052dec9
    MOV EAX,dword ptr [EBX + 0x38]      ; 0052df7f
        ;   Label: default
    MOV dword ptr [ESP + 0x10],EAX      ; 0052df82
    FLD float ptr [ESP + 0x10]          ; 0052df86
    FCOMP float ptr [0x0063ab07]        ; 0052df8a | FLOAT_0063ab07
    FNSTSW AX                           ; 0052df90
    SAHF                                ; 0052df92
    JZ 0x0052dfac                       ; 0052df93
        ;   XREF to: 0052dfac (CONDITIONAL_JUMP)  ; LAB_0052dfac
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052df95
        ;   Label: LAB_0052df95
    MOV EAX,dword ptr [EBX + 0x34]      ; 0052df98
    MOV dword ptr [EDX],EAX             ; 0052df9b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052df9d
    MOV dword ptr [ESI],EAX             ; 0052dfa1
    MOV EAX,EDI                         ; 0052dfa3
    MOV ESP,EBP                         ; 0052dfa5
    POP EBP                             ; 0052dfa7
    POP EDI                             ; 0052dfa8
    POP ESI                             ; 0052dfa9
    POP EBX                             ; 0052dfaa
    RET                                 ; 0052dfab
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052dfac
        ;   Label: LAB_0052dfac
    MOV EAX,dword ptr [EBX + 0x64]      ; 0052dfaf
    MOV ECX,dword ptr [EBX + 0x34]      ; 0052dfb2
    DEC EAX                             ; 0052dfb5
    PUSH ECX                            ; 0052dfb6
    MOV dword ptr [ESP + 0x18],EAX      ; 0052dfb7
    MOV EDX,dword ptr [EDX + 0x50]      ; 0052dfbb
    FILD dword ptr [ESP + 0x18]         ; 0052dfbe
    SUB ESP,0x4                         ; 0052dfc2
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052dfc5
    FSTP float ptr [ESP]                ; 0052dfc8
    MOV ECX,dword ptr [EAX]             ; 0052dfcb
    PUSH ECX                            ; 0052dfcd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dfce
    PUSH EAX                            ; 0052dfd1
    CALL dword ptr [EDX + 0x4]          ; 0052dfd2
    ADD ESP,0x10                        ; 0052dfd5
    MOV dword ptr [ESP + 0x14],EAX      ; 0052dfd8
    FILD dword ptr [ESP + 0x14]         ; 0052dfdc
    FSTP float ptr [ESP + 0x10]         ; 0052dfe0
    JMP 0x0052df95                      ; 0052dfe4
        ;   XREF to: 0052df95 (UNCONDITIONAL_JUMP)  ; LAB_0052df95
    PUSH dword ptr [EBP + 0x24]         ; 0052dfe6
        ;   Label: LAB_0052dfe6
    FILD dword ptr [EBX + 0x60]         ; 0052dfe9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dfec
    FLD ST0                             ; 0052dfef
    FADD float ptr [ESP + 0xc]          ; 0052dff1
    SUB ESP,0x4                         ; 0052dff5
    MOV EAX,dword ptr [EAX + 0x50]      ; 0052dff8
    FSTP float ptr [ESP]                ; 0052dffb
    SUB ESP,0x4                         ; 0052dffe
    FADD float ptr [ESI]                ; 0052e001
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e003
    FSTP float ptr [ESP]                ; 0052e006
    PUSH EDX                            ; 0052e009
    CALL dword ptr [EAX + 0x8]          ; 0052e00a
    ADD ESP,0x10                        ; 0052e00d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052e010
    MOV dword ptr [ESI],EAX             ; 0052e014
    MOV EAX,EDI                         ; 0052e016
    MOV ESP,EBP                         ; 0052e018
    POP EBP                             ; 0052e01a
    POP EDI                             ; 0052e01b
    POP ESI                             ; 0052e01c
    POP EBX                             ; 0052e01d
    RET                                 ; 0052e01e

