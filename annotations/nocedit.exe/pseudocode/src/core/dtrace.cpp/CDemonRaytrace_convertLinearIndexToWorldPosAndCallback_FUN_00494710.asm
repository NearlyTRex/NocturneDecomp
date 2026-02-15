; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710(CDemonRaytrace *this_ptr,void *callback_data,int linear_index,void *user_data)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   callback_data
; int              Stack[0xc]:4   linear_index
; void *           Stack[0x10]:4   user_data
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494c26
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494710
        ;   Label: core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
    PUSH ESI                            ; 00494711
    PUSH EDI                            ; 00494712
    SUB ESP,0x10                        ; 00494713
    MOV ECX,dword ptr [ESP + 0x20]      ; 00494716
    MOV EBX,dword ptr [ESP + 0x28]      ; 0049471a
    MOV ESI,dword ptr [ECX + 0x44]      ; 0049471e
    IMUL ESI,dword ptr [ECX + 0x48]     ; 00494721
    MOV EDX,EBX                         ; 00494725
    MOV EAX,EBX                         ; 00494727
    SAR EDX,0x1f                        ; 00494729
    IDIV ESI                            ; 0049472c
    MOV ESI,EAX                         ; 0049472e
    MOV EAX,dword ptr [ECX + 0x44]      ; 00494730
    IMUL EAX,ESI                        ; 00494733
    MOV EDI,dword ptr [ECX + 0x48]      ; 00494736
    IMUL EAX,EDI                        ; 00494739
    SUB EBX,EAX                         ; 0049473c
    MOV EDX,EBX                         ; 0049473e
    MOV EAX,EBX                         ; 00494740
    SAR EDX,0x1f                        ; 00494742
    IDIV EDI                            ; 00494745
    MOV EDX,EDI                         ; 00494747
    IMUL EDX,EAX                        ; 00494749
    MOV dword ptr [ESP + 0xc],ESI       ; 0049474c
    FILD dword ptr [ESP + 0xc]          ; 00494750
    FMUL float ptr [ECX + 0x28]         ; 00494754
    FADD float ptr [ECX + 0x10]         ; 00494757
    MOV dword ptr [ESP + 0xc],EAX       ; 0049475a
    FSTP float ptr [ESP]                ; 0049475e
    FILD dword ptr [ESP + 0xc]          ; 00494761
    FMUL float ptr [ECX + 0x2c]         ; 00494765
    FADD float ptr [ECX + 0x14]         ; 00494768
    SUB EBX,EDX                         ; 0049476b
    FSTP float ptr [ESP + 0x4]          ; 0049476d
    MOV dword ptr [ESP + 0xc],EBX       ; 00494771
    MOV EAX,ESP                         ; 00494775
    FILD dword ptr [ESP + 0xc]          ; 00494777
    FMUL float ptr [ECX + 0x30]         ; 0049477b
    PUSH EAX                            ; 0049477e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049477f
    MOV EDX,dword ptr [ESP + 0x28]      ; 00494783
    PUSH EAX                            ; 00494787
    FADD float ptr [ECX + 0x18]         ; 00494788
    PUSH EDX                            ; 0049478b
    FSTP float ptr [ESP + 0x14]         ; 0049478c
    CALL core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 ; 00494790
        ;   XREF to: 004825c0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0(CDemonPart * this_ptr, _FILE * file_handle, CVector3f * offset_position)
    ADD ESP,0xc                         ; 00494795
    ADD ESP,0x10                        ; 00494798
    POP EDI                             ; 0049479b
    POP ESI                             ; 0049479c
    POP EBX                             ; 0049479d
    RET                                 ; 0049479e

