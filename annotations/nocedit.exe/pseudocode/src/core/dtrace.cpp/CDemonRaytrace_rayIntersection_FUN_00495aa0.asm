; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace * this_ptr, CVector3f * output_point, CVector3f * ray_start, CVector3f * ray_end)
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
;   core_drip.cpp_FUN_0048e2a0 at 0048e33d
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495aa0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
    PUSH ESI                            ; 00495aa1
    PUSH EDI                            ; 00495aa2
    PUSH EBP                            ; 00495aa3
    MOV EBP,ESP                         ; 00495aa4
    SUB ESP,0x28                        ; 00495aa6
    AND ESP,0xfffffff8                  ; 00495aa9
    MOV ESI,dword ptr [EBP + 0x18]      ; 00495aac
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00495aaf
    MOV EBX,dword ptr [EBP + 0x20]      ; 00495ab2
    PUSH 0x0                            ; 00495ab5
    PUSH 0x0                            ; 00495ab7
    PUSH EBX                            ; 00495ab9
    PUSH EDI                            ; 00495aba
    MOV EDX,dword ptr [EBP + 0x14]      ; 00495abb
    PUSH EDX                            ; 00495abe
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 00495abf | float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x38],EAX      ; 00495ac4
    FLD float ptr [ESP + 0x38]          ; 00495ac8
    ADD ESP,0x14                        ; 00495acc
    FLDZ                                ; 00495acf
    FXCH                                ; 00495ad1
    FST float ptr [ESP + 0x8]           ; 00495ad3
    FSTP double ptr [ESP]               ; 00495ad7
    FCOMP double ptr [ESP]              ; 00495ada
    FNSTSW AX                           ; 00495add
    SAHF                                ; 00495adf
    JA 0x00495b51                       ; 00495ae0 | LAB_00495b51
        ;   XREF to: 00495b51 (CONDITIONAL_JUMP)
    FLD1                                ; 00495ae2
    FCOMP double ptr [ESP]              ; 00495ae4
    FNSTSW AX                           ; 00495ae7
    SAHF                                ; 00495ae9
    JBE 0x00495b51                      ; 00495aea | LAB_00495b51
        ;   XREF to: 00495b51 (CONDITIONAL_JUMP)
    FLD float ptr [EBX]                 ; 00495aec
    FSUB float ptr [EDI]                ; 00495aee
    FST float ptr [ESP + 0x18]          ; 00495af0
    FLD float ptr [EBX + 0x4]           ; 00495af4
    FSUB float ptr [EDI + 0x4]          ; 00495af7
    FXCH                                ; 00495afa
    FLD float ptr [ESP + 0x8]           ; 00495afc
    FXCH                                ; 00495b00
    FMUL ST1                            ; 00495b02
    FXCH ST2                            ; 00495b04
    FST float ptr [ESP + 0x1c]          ; 00495b06
    FLD float ptr [EBX + 0x8]           ; 00495b0a
    FSUB float ptr [EDI + 0x8]          ; 00495b0d
    FXCH                                ; 00495b10
    FMUL ST2                            ; 00495b12
    FXCH                                ; 00495b14
    FST float ptr [ESP + 0x20]          ; 00495b16
    FMULP ST2                           ; 00495b1a
    FXCH ST2                            ; 00495b1c
    FSTP float ptr [ESP + 0xc]          ; 00495b1e
    FXCH                                ; 00495b22
    FSTP float ptr [ESP + 0x10]         ; 00495b24
    FSTP float ptr [ESP + 0x14]         ; 00495b28
    FLD float ptr [EDI]                 ; 00495b2c
    FADD float ptr [ESP + 0xc]          ; 00495b2e
    FSTP float ptr [ESI]                ; 00495b32
    FLD float ptr [EDI + 0x4]           ; 00495b34
    FADD float ptr [ESP + 0x10]         ; 00495b37
    FSTP float ptr [ESI + 0x4]          ; 00495b3b
    FLD float ptr [EDI + 0x8]           ; 00495b3e
    FADD float ptr [ESP + 0x14]         ; 00495b41
    FSTP float ptr [ESI + 0x8]          ; 00495b45
    MOV EAX,ESI                         ; 00495b48
    MOV ESP,EBP                         ; 00495b4a
    POP EBP                             ; 00495b4c
    POP EDI                             ; 00495b4d
    POP ESI                             ; 00495b4e
    POP EBX                             ; 00495b4f
    RET                                 ; 00495b50
    MOV EAX,dword ptr [EBX]             ; 00495b51
        ;   Label: LAB_00495b51
    MOV dword ptr [ESI],EAX             ; 00495b53
    LEA EAX,[EBX + 0x4]                 ; 00495b55
    LEA EDI,[ESI + 0x4]                 ; 00495b58
    MOV EAX,dword ptr [EAX]             ; 00495b5b
    MOV dword ptr [EDI],EAX             ; 00495b5d
    MOV EAX,dword ptr [EBX + 0x8]       ; 00495b5f
    MOV dword ptr [EDI + 0x4],EAX       ; 00495b62
    MOV EAX,ESI                         ; 00495b65
    MOV ESP,EBP                         ; 00495b67
    POP EBP                             ; 00495b69
    POP EDI                             ; 00495b6a
    POP ESI                             ; 00495b6b
    POP EBX                             ; 00495b6c
    RET                                 ; 00495b6d

