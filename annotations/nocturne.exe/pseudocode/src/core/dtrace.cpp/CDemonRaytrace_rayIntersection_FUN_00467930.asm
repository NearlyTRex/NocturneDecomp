; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00467930(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_point
; CVector3f *      Stack[0xc]:4   ray_start
; CVector3f *      Stack[0x10]:4   ray_end
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_drip.cpp_FUN_00462300 at 0046239d
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467930
        ;   Label: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00467930
    PUSH ESI                            ; 00467931
    PUSH EDI                            ; 00467932
    PUSH EBP                            ; 00467933
    MOV EBP,ESP                         ; 00467934
    SUB ESP,0x28                        ; 00467936
    AND ESP,0xfffffff8                  ; 00467939
    MOV ESI,dword ptr [EBP + 0x18]      ; 0046793c
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0046793f
    MOV EBX,dword ptr [EBP + 0x20]      ; 00467942
    PUSH 0x0                            ; 00467945
    PUSH 0x0                            ; 00467947
    PUSH EBX                            ; 00467949
    PUSH EDI                            ; 0046794a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046794b
    PUSH EDX                            ; 0046794e
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00 ; 0046794f
        ;   XREF to: 00467a00 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x38],EAX      ; 00467954
    FLD float ptr [ESP + 0x38]          ; 00467958
    ADD ESP,0x14                        ; 0046795c
    FLDZ                                ; 0046795f
    FXCH                                ; 00467961
    FST float ptr [ESP + 0x8]           ; 00467963
    FSTP double ptr [ESP]               ; 00467967
    FCOMP double ptr [ESP]              ; 0046796a
    FNSTSW AX                           ; 0046796d
    SAHF                                ; 0046796f
    JA 0x004679e1                       ; 00467970
        ;   XREF to: 004679e1 (CONDITIONAL_JUMP)  ; LAB_004679e1
    FLD1                                ; 00467972
    FCOMP double ptr [ESP]              ; 00467974
    FNSTSW AX                           ; 00467977
    SAHF                                ; 00467979
    JBE 0x004679e1                      ; 0046797a
        ;   XREF to: 004679e1 (CONDITIONAL_JUMP)  ; LAB_004679e1
    FLD float ptr [EBX]                 ; 0046797c
    FSUB float ptr [EDI]                ; 0046797e
    FST float ptr [ESP + 0x18]          ; 00467980
    FLD float ptr [EBX + 0x4]           ; 00467984
    FSUB float ptr [EDI + 0x4]          ; 00467987
    FXCH                                ; 0046798a
    FLD float ptr [ESP + 0x8]           ; 0046798c
    FXCH                                ; 00467990
    FMUL ST1                            ; 00467992
    FXCH ST2                            ; 00467994
    FST float ptr [ESP + 0x1c]          ; 00467996
    FLD float ptr [EBX + 0x8]           ; 0046799a
    FSUB float ptr [EDI + 0x8]          ; 0046799d
    FXCH                                ; 004679a0
    FMUL ST2                            ; 004679a2
    FXCH                                ; 004679a4
    FST float ptr [ESP + 0x20]          ; 004679a6
    FMULP ST2                           ; 004679aa
    FXCH ST2                            ; 004679ac
    FSTP float ptr [ESP + 0xc]          ; 004679ae
    FXCH                                ; 004679b2
    FSTP float ptr [ESP + 0x10]         ; 004679b4
    FSTP float ptr [ESP + 0x14]         ; 004679b8
    FLD float ptr [EDI]                 ; 004679bc
    FADD float ptr [ESP + 0xc]          ; 004679be
    FSTP float ptr [ESI]                ; 004679c2
    FLD float ptr [EDI + 0x4]           ; 004679c4
    FADD float ptr [ESP + 0x10]         ; 004679c7
    FSTP float ptr [ESI + 0x4]          ; 004679cb
    FLD float ptr [EDI + 0x8]           ; 004679ce
    FADD float ptr [ESP + 0x14]         ; 004679d1
    FSTP float ptr [ESI + 0x8]          ; 004679d5
    MOV EAX,ESI                         ; 004679d8
    MOV ESP,EBP                         ; 004679da
    POP EBP                             ; 004679dc
    POP EDI                             ; 004679dd
    POP ESI                             ; 004679de
    POP EBX                             ; 004679df
    RET                                 ; 004679e0
    MOV EAX,dword ptr [EBX]             ; 004679e1
        ;   Label: LAB_004679e1
    MOV dword ptr [ESI],EAX             ; 004679e3
    LEA EAX,[EBX + 0x4]                 ; 004679e5
    LEA EDI,[ESI + 0x4]                 ; 004679e8
    MOV EAX,dword ptr [EAX]             ; 004679eb
    MOV dword ptr [EDI],EAX             ; 004679ed
    MOV EAX,dword ptr [EBX + 0x8]       ; 004679ef
    MOV dword ptr [EDI + 0x4],EAX       ; 004679f2
    MOV EAX,ESI                         ; 004679f5
    MOV ESP,EBP                         ; 004679f7
    POP EBP                             ; 004679f9
    POP EDI                             ; 004679fa
    POP ESI                             ; 004679fb
    POP EBX                             ; 004679fc
    RET                                 ; 004679fd

