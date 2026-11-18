; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack3_esi core_charactr_cpp_makeVector_FUN_0042bef0(float x,float y,float z,CVector3f *out)
;
; Parameters:
; float            Stack[0x4]:4   x
; float            Stack[0x8]:4   y
; float            Stack[0xc]:4   z
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00524dfb
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0042bef0
        ;   Label: core_charactr.cpp_makeVector_FUN_0042bef0
    SUB ESP,0xc                         ; 0042bef1
    MOV EAX,ESI                         ; 0042bef4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042bef6
    MOV dword ptr [ESP],EDX             ; 0042befa
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042befd
    MOV EDI,ESI                         ; 0042bf01
    MOV dword ptr [ESP + 0x8],EDX       ; 0042bf03
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042bf07
    MOV ESI,ESP                         ; 0042bf0b
    MOV dword ptr [ESP + 0x4],EDX       ; 0042bf0d
    MOVSD ES:EDI,ESI                    ; 0042bf11
    MOVSD ES:EDI,ESI                    ; 0042bf12
    MOVSD ES:EDI,ESI                    ; 0042bf13
    ADD ESP,0xc                         ; 0042bf14
    POP EDI                             ; 0042bf17
    RET                                 ; 0042bf18

