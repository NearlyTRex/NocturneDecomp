; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_extractBitsFromBuffer_FUN_0043e840(SBitBuffer *bit_state,int bit_count,char **output_pos,int *bytes_remaining)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_state
; int              Stack[0x8]:4   bit_count
; char * *         Stack[0xc]:4   output_pos
; int *            Stack[0x10]:4   bytes_remaining
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_readCodeFromBuffer_FUN_0043f0d0 at 0043f109
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e840
        ;   Label: support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
    PUSH ESI                            ; 0043e841
    PUSH EDI                            ; 0043e842
    PUSH EBP                            ; 0043e843
    SUB ESP,0x4                         ; 0043e844
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043e847
    MOV EDI,dword ptr [ESP + 0x20]      ; 0043e84b
    MOV EBX,dword ptr [ESP + 0x24]      ; 0043e84f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e853
    MOV ECX,dword ptr [EAX]             ; 0043e857
    CMP EDX,ECX                         ; 0043e859
    JL 0x0043e930                       ; 0043e85b
        ;   XREF to: 0043e930 (CONDITIONAL_JUMP)  ; LAB_0043e930
    JZ 0x0043e966                       ; 0043e861
        ;   XREF to: 0043e966 (CONDITIONAL_JUMP)  ; LAB_0043e966
    MOV CL,byte ptr [EAX]               ; 0043e867
    MOV EAX,0xffffffff                  ; 0043e869
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043e86e
    SHL EAX,CL                          ; 0043e872
    MOV ESI,dword ptr [ESI + 0x4]       ; 0043e874
    NOT EAX                             ; 0043e877
    AND ESI,EAX                         ; 0043e879
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e87b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043e87f
    MOV EAX,dword ptr [EAX]             ; 0043e883
    MOV dword ptr [ECX],0x0             ; 0043e885
    SUB EDX,EAX                         ; 0043e88b
    MOV dword ptr [ECX + 0x4],0x0       ; 0043e88d
    CMP EDX,0x8                         ; 0043e894
    JL 0x0043e8cd                       ; 0043e897
        ;   XREF to: 0043e8cd (CONDITIONAL_JUMP)  ; LAB_0043e8cd
    CMP dword ptr [EBX],0x1             ; 0043e899
        ;   Label: LAB_0043e899
    JL 0x0043e980                       ; 0043e89c
        ;   XREF to: 0043e980 (CONDITIONAL_JUMP)  ; LAB_0043e980
    MOV ECX,dword ptr [EDI]             ; 0043e8a2
    LEA EBP,[ECX + 0x1]                 ; 0043e8a4
    MOV dword ptr [EDI],EBP             ; 0043e8a7
    MOV CL,byte ptr [ECX]               ; 0043e8a9
    AND ECX,0xff                        ; 0043e8ab
    MOV dword ptr [ESP],ECX             ; 0043e8b1
    MOV EBP,dword ptr [ESP]             ; 0043e8b4
    MOV CL,AL                           ; 0043e8b7
    SHL EBP,CL                          ; 0043e8b9
    OR ESI,EBP                          ; 0043e8bb
    MOV EBP,dword ptr [EBX]             ; 0043e8bd
    SUB EDX,0x8                         ; 0043e8bf
    DEC EBP                             ; 0043e8c2
    ADD EAX,0x8                         ; 0043e8c3
    MOV dword ptr [EBX],EBP             ; 0043e8c6
    CMP EDX,0x8                         ; 0043e8c8
    JGE 0x0043e899                      ; 0043e8cb
        ;   XREF to: 0043e899 (CONDITIONAL_JUMP)  ; LAB_0043e899
    TEST EDX,EDX                        ; 0043e8cd
        ;   Label: LAB_0043e8cd
    JLE 0x0043e924                      ; 0043e8cf
        ;   XREF to: 0043e924 (CONDITIONAL_JUMP)  ; LAB_0043e924
    CMP dword ptr [EBX],0x1             ; 0043e8d1
    JL 0x0043e980                       ; 0043e8d4
        ;   XREF to: 0043e980 (CONDITIONAL_JUMP)  ; LAB_0043e980
    MOV ECX,dword ptr [EDI]             ; 0043e8da
    LEA EBP,[ECX + 0x1]                 ; 0043e8dc
    MOV dword ptr [EDI],EBP             ; 0043e8df
    MOV CL,byte ptr [ECX]               ; 0043e8e1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043e8e3
    AND ECX,0xff                        ; 0043e8e7
    MOV dword ptr [EDI + 0x4],ECX       ; 0043e8ed
    MOV EDI,0xffffffff                  ; 0043e8f0
    MOV CL,DL                           ; 0043e8f5
    SHL EDI,CL                          ; 0043e8f7
    MOV ECX,EDI                         ; 0043e8f9
    DEC dword ptr [EBX]                 ; 0043e8fb
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043e8fd
    NOT ECX                             ; 0043e901
    MOV EBX,dword ptr [EBX + 0x4]       ; 0043e903
    AND EBX,ECX                         ; 0043e906
    MOV CL,AL                           ; 0043e908
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e90a
    SHL EBX,CL                          ; 0043e90e
    MOV CL,DL                           ; 0043e910
    SHR dword ptr [EAX + 0x4],CL        ; 0043e912
    MOV EAX,0x8                         ; 0043e915
    SUB EAX,EDX                         ; 0043e91a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043e91c
    OR ESI,EBX                          ; 0043e920
    MOV dword ptr [EDX],EAX             ; 0043e922
    MOV ECX,ESI                         ; 0043e924
        ;   Label: LAB_0043e924
    MOV EAX,ECX                         ; 0043e926
    ADD ESP,0x4                         ; 0043e928
    POP EBP                             ; 0043e92b
    POP EDI                             ; 0043e92c
    POP ESI                             ; 0043e92d
    POP EBX                             ; 0043e92e
    RET                                 ; 0043e92f
    MOV EAX,0xffffffff                  ; 0043e930
        ;   Label: LAB_0043e930
    MOV CL,DL                           ; 0043e935
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043e937
    SHL EAX,CL                          ; 0043e93b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043e93d
    MOV EBP,dword ptr [EBX + 0x4]       ; 0043e941
    MOV EDI,dword ptr [ECX + 0x4]       ; 0043e944
    MOV CL,DL                           ; 0043e947
    SHR EBP,CL                          ; 0043e949
    MOV dword ptr [EBX + 0x4],EBP       ; 0043e94b
    MOV ECX,EBX                         ; 0043e94e
    MOV EBX,dword ptr [EBX]             ; 0043e950
    NOT EAX                             ; 0043e952
    SUB EBX,EDX                         ; 0043e954
    AND EAX,EDI                         ; 0043e956
    MOV dword ptr [ECX],EBX             ; 0043e958
    MOV ECX,EAX                         ; 0043e95a
    MOV EAX,ECX                         ; 0043e95c
    ADD ESP,0x4                         ; 0043e95e
    POP EBP                             ; 0043e961
    POP EDI                             ; 0043e962
    POP ESI                             ; 0043e963
    POP EBX                             ; 0043e964
    RET                                 ; 0043e965
    MOV dword ptr [EAX],0x0             ; 0043e966
        ;   Label: LAB_0043e966
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043e96c
    MOV dword ptr [EAX + 0x4],0x0       ; 0043e96f
    MOV EAX,ECX                         ; 0043e976
    ADD ESP,0x4                         ; 0043e978
    POP EBP                             ; 0043e97b
    POP EDI                             ; 0043e97c
    POP ESI                             ; 0043e97d
    POP EBX                             ; 0043e97e
    RET                                 ; 0043e97f
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043e980
        ;   Label: LAB_0043e980
    MOV dword ptr [EDX + 0x4],ESI       ; 0043e984
    MOV ECX,0xffffffff                  ; 0043e987
    MOV dword ptr [EDX],EAX             ; 0043e98c
    MOV EAX,ECX                         ; 0043e98e
    ADD ESP,0x4                         ; 0043e990
    POP EBP                             ; 0043e993
    POP EDI                             ; 0043e994
    POP ESI                             ; 0043e995
    POP EBX                             ; 0043e996
    RET                                 ; 0043e997

