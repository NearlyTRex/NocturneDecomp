; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack3_esi core_doc_cpp_makeVector_FUN_00476620(float x,float y,float z,CVector3f *out)
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
;   core_script.cpp_CScript_step_FUN_00544460 at 00546cb0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00476620
        ;   Label: core_doc.cpp_makeVector_FUN_00476620
    SUB ESP,0xc                         ; 00476621
    MOV EAX,ESI                         ; 00476624
    MOV EDX,dword ptr [ESP + 0x14]      ; 00476626
    MOV dword ptr [ESP],EDX             ; 0047662a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047662d
    MOV EDI,ESI                         ; 00476631
    MOV dword ptr [ESP + 0x8],EDX       ; 00476633
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00476637
    MOV ESI,ESP                         ; 0047663b
    MOV dword ptr [ESP + 0x4],EDX       ; 0047663d
    MOVSD ES:EDI,ESI                    ; 00476641
    MOVSD ES:EDI,ESI                    ; 00476642
    MOVSD ES:EDI,ESI                    ; 00476643
    ADD ESP,0xc                         ; 00476644
    POP EDI                             ; 00476647
    RET                                 ; 00476648

